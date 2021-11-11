##############################
#                            #
#       sina yademellat      #
#         9813027346         #
#           HW_2             #
#                            #                                               
##############################
# 
# for example: 12.45 + -4.5 * xy - 12 / y   ====>  12.45 -4.5 xy * + 12 y / -
# 
# (1) Number --> float and Integer
# 
# (2) Name  
#  
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


# (0) import :)
import ply.lex as lex

# (1) List of token Names. 
tokens = (
   'NUMBER',
   'NAME',
   'PLUS',
   'MINUS',
   'TIMES',
   'DIVIDE',
   'LPAREN',
   'RPAREN' 
)

# (2) Regular expression rules for simple tokens
t_PLUS    = r'\+'
t_MINUS   = r'-'
t_TIMES   = r'\*'
t_DIVIDE  = r'/'
t_LPAREN  = r'\('
t_RPAREN  = r'\)'

# (3) A regular expression rule with some action code

def t_NAME(t):
    r'[a-zA-Z_][a-zA-Z_]*'
    t.value = t.value
    return t

# Number --> float and Integer
def t_NUMBER(t):
    #EX) 12.45 , -4.5 , +12 , ....
    r'[+-]?[0-9]+[.]?[0-9]*'
    t.value = t.value
    return t
    
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

# (4) track line numbers
def t_newline(t):
    r'\n+'
    t.lexer.lineno += len(t.value)

# (5) A string containing ignored characters (spaces and tabs)
t_ignore  = ' \t'

# (6) Error handling rule
def t_error(t):
    
    print("\n~~~~~~~~ ERROR ~~~~~~~~~~~~\n")
    
    print("Illegal character '%s'" % t.value[0] ) 
    
    print("\nLine: {L}".format(L=t.lexer.lineno))
    
    print("\n~~~~~~~~ ERROR ~~~~~~~~~~~~\n")
    
    t.lexer.skip(1)

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

# (7) Build the lexer
lexer = lex.lex()

def prec(op1, op2):
    pm ='+-'
    md = '*/'
    same = (op1 in pm and op2 in pm) or (op1 in md and op2 in md)
    if same  or (op1 in md and op2 in pm) :
        return 1;
    return -1;

def infix_to_postfix(data):
    
    print("\nINPUT << {D} >>\n".format(D=data))
   
    # Give the lexer some input
    lexer.input(data)
    
    op = []
    operators = dict([('PLUS','+'),('MINUS','-'),('TIMES','*'),('DIVIDE','/')])
    
    postfix = ""

    # Tokenize
    while True:
        
        tok = lexer.token()
        
        if not tok:
            break      # No more input
        
        if tok.type == 'NUMBER' or  tok.type == 'NAME':
            postfix += (tok.value+' ')

        elif tok.type in operators.keys():
            
            _op = operators.get(tok.type)
            
            if len(op) == 0:
                op.append(_op)
            else:
                while True:
                    if len(op)==0:
                        op.append(_op)
                        break
                    left = op[-1]
                    if prec(left, _op) == 1:
                         postfix += (op.pop()+' ')
                    else:
                        op.append(_op)
                        break
    
    while len(op)>0:
            postfix += (op.pop()+' ')

    return postfix

def exe_pos(data):
    
    # Give the lexer some input
    lexer.input(data)
    
    val = []
    operators = dict([('PLUS','+'),('MINUS','-'),('TIMES','*'),('DIVIDE','/')])
    
    # Tokenize
    while True:
        tok = lexer.token()
        if not tok:
            break      # No more input
        if tok.type == 'NUMBER':
            val.append(float(tok.value))
        elif tok.type == 'NAME':
              print("?? < {Q} > ?? ==>> default: {Q} = -1 ".format(Q=tok.value))
              val.append(-1)
        else:
            op = operators.get(tok.type)
            right = val.pop()
            left = val.pop()
            if op == '+':
                val.append(left+right)
            elif op == '-':
                val.append(left-right)
            elif op == '*':
                val.append(left*right)
            elif op == '/':
                val.append(left/right)
    
    #return val.pop()
    
    tmp_return = val.pop()
    if tmp_return-int(tmp_return)==0:
        return int(tmp_return)
    else:
        return tmp_return
        

##############################################################

if __name__ == '__main__':

    #tmp_input="12.34 +  ABCD "    

    #12.45 + -4.5 * xy - 12 / y ====> 12.45 -4.5 xy * + 12 y / -
    
    tmp_input="12.45 + -4.5 * xy - 12 / y"

    postfix=infix_to_postfix(tmp_input)
    
    print("Post  << {PO} >>\n".format(PO=postfix))
    
    #Extra 
    print("\nans  << {anS} >>".format(anS=exe_pos(postfix)))

##############################################################
