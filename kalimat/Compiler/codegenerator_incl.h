/**************************************************************************
** The Kalimat programming language
**   Copyright (C) 2010 Mohamed Samy Ali - samy2004@gmail.com
**   This project is released under the Apache License version 2.0
**   as described in the included license.txt file
**************************************************************************/

#include "../Lexer/token.h"
#include "../Parser/codeformatter.h"
#include "../Parser/ast.h"
#include "../Parser/KalimatAst/kalimatast_incl.h"
#include "../smallvm/codedocument.h"
#include "codeposition.h"
#include "codegenhelper.h"
#include "codegenerator.h"
