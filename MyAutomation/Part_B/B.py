from fpdf import FPDF

def create_table(table_data, title='', data_size = 6, title_size=12, align_data='L', align_header='L', cell_width='even', x_start='x_default',emphasize_data=[], emphasize_style=None, emphasize_color=(0,0,0)):
    """
    table_data: 
                list of lists with first element being list of headers
    title: 
                (Optional) title of table (optional)
    data_size: 
                the font size of table data
    title_size: 
                the font size fo the title of the table
    align_data: 
                align table data
                L = left align
                C = center align
                R = right align
    align_header: 
                align table data
                L = left align
                C = center align
                R = right align
    cell_width: 
                even: evenly distribute cell/column width
                uneven: base cell size on lenght of cell/column items
                int: int value for width of each cell/column
                list of ints: list equal to number of columns with the widht of each cell / column
    x_start: 
                where the left edge of table should start
    emphasize_data:  
                which data elements are to be emphasized - pass as list 
                emphasize_style: the font style you want emphaized data to take
                emphasize_color: emphasize color (if other than black) 
    
    """
    default_style = pdf.font_style
    if emphasize_style == None:
        emphasize_style = default_style
    def get_col_widths():
        col_width = cell_width
        if col_width == 'even':
            col_width = pdf.epw / len(data[0]) - 1
        elif col_width == 'uneven':
            col_widths = []

            for col in range(len(table_data[0])): # for every row
                longest = 0 
                for row in range(len(table_data)):
                    cell_value = str(table_data[row][col])
                    value_length = pdf.get_string_width(cell_value)
                    if value_length > longest:
                        longest = value_length
                col_widths.append(longest + 4) # add 4 for padding
            col_width = col_widths
        elif isinstance(cell_width, list):
            col_width = cell_width  # TODO: convert all items in list to int        
        else:
            col_width = int(col_width)
        return col_width

    if isinstance(table_data, dict):
        header = [key for key in table_data]
        data = []
        for key in table_data:
            value = table_data[key]
            data.append(value)
        data = [list(a) for a in zip(*data)]
    else:
        header = table_data[0]
        data = table_data[1:]

    line_height = pdf.font_size * 2.5

    col_width = get_col_widths()
    pdf.set_font(size=title_size)
    if x_start == 'C':
        table_width = 0
        if isinstance(col_width, list):
            for width in col_width:
                table_width += width
        else:  
            table_width = col_width * len(table_data[0])
        margin_width = pdf.w - table_width

        center_table = margin_width / 2
        x_start = center_table
        pdf.set_x(x_start)
    elif isinstance(x_start, int):
        pdf.set_x(x_start)
    elif x_start == 'x_default':
        x_start = pdf.set_x(pdf.l_margin)
    if title != '':
        pdf.multi_cell(0, line_height, title, border=0, align='j', ln=3, max_line_height=pdf.font_size)
        pdf.ln(line_height)
    pdf.set_font(size=data_size)
    y1 = pdf.get_y()
    if x_start:
        x_left = x_start
    else:
        x_left = pdf.get_x()
    x_right = pdf.epw + x_left
    if  not isinstance(col_width, list):
        if x_start:
            pdf.set_x(x_start)
        for datum in header:
            pdf.multi_cell(col_width, line_height, datum, border=0, align=align_header, ln=3, max_line_height=pdf.font_size)
            x_right = pdf.get_x()
        pdf.ln(line_height)
        y2 = pdf.get_y()
        pdf.line(x_left,y1,x_right,y1)
        pdf.line(x_left,y2,x_right,y2)

        for row in data:
            if x_start:
                pdf.set_x(x_start)
            for datum in row:
                if datum in emphasize_data:
                    pdf.set_text_color(*emphasize_color)
                    pdf.set_font(style=emphasize_style)
                    pdf.multi_cell(col_width, line_height, datum, border=0, align=align_data, ln=3, max_line_height=pdf.font_size)
                    pdf.set_text_color(0,0,0)
                    pdf.set_font(style=default_style)
                else:
                    pdf.multi_cell(col_width, line_height, datum, border=0, align=align_data, ln=3, max_line_height=pdf.font_size) # ln = 3 - move cursor to right with same vertical offset # this uses an object named pdf
            pdf.ln(line_height)
    else:
        if x_start:
            pdf.set_x(x_start)
        for i in range(len(header)):
            datum = header[i]
            pdf.multi_cell(col_width[i], line_height, datum, border=0, align=align_header, ln=3, max_line_height=pdf.font_size)
            x_right = pdf.get_x()
        pdf.ln(line_height) 
        y2 = pdf.get_y()
        pdf.line(x_left,y1,x_right,y1)
        pdf.line(x_left,y2,x_right,y2)
        for i in range(len(data)):
            if x_start:
                pdf.set_x(x_start)
            row = data[i]
            for i in range(len(row)):
                datum = row[i]
                if not isinstance(datum, str):
                    datum = str(datum)
                adjusted_col_width = col_width[i]
                if datum in emphasize_data:
                    pdf.set_text_color(*emphasize_color)
                    pdf.set_font(style=emphasize_style)
                    pdf.multi_cell(adjusted_col_width, line_height, datum, border=0, align=align_data, ln=3, max_line_height=pdf.font_size)
                    pdf.set_text_color(0,0,0)
                    pdf.set_font(style=default_style)
                else:
                    pdf.multi_cell(adjusted_col_width, line_height, datum, border=0, align=align_data, ln=3, max_line_height=pdf.font_size) # ln = 3 - move cursor to right with same vertical offset # this uses an object named pdf
            pdf.ln(line_height)
    y3 = pdf.get_y()
    pdf.line(x_left,y3,x_right,y3)


data = [
    ["TANK", "CAPECITY", "LEVEL", "TON", 'SOLID%','VISCOZITYSEC','GETTHMS','SPG','SOLY.H2O','APPERA'],
    ["T-801","48", "1111 ", "2222", '3333','4444','5555','6666','7777','8888'],
    ["T-802","48", " ", "", '','','','','',''],
    ["T-803","50", " ", "", '','','','','',''],
    ["T-804","15", " ", "", '','','','','',''],
    ["OC"  ,"ok" , " ", "", '','','','','',''],
]

pdf = FPDF()
pdf.add_page()
pdf.set_font("Times", size=10)

pdf.image('img/date.png', 180, 0, 22)
pdf.image('img/vaschasp.png', 55, 3, 70)

create_table(table_data = data,title='    ', cell_width='even')
pdf.ln()
pdf.image('img/Seconder.png', 50, 80, 22)
pdf.image('img/producer2.png', 150, 82, 18)

pdf.output('Glue.pdf')
