int  isWhiteSpace( char c); 
void parseLine( char inStr[], char *outStr[]); 
int  determineOppcode( char oppcode[] ); 
char determineInstructionType( char oppcode[] ); 
int  main(int argc, char *argv[] ); 
int  tagAddress( char tagName[] );  
void translateIntoInts( char* instruction[], int outArr[], int lineNumber );
int  mainRoutine( char line[], int lineNumber );
void locateTags( FILE* file );
int  isAtag( char tag[] ); 
int  countLines( FILE* file );
int  packIntoNumber( int instruct[], int lineNumber );
int  packRtype( int oppcode, int regA, int regB, int regDest );
int  packItype( int oppcode, int regA, int regB, int offset );
int  packJtype( int oppcode, int regA, int regB );
int  packOtype( int oppcode );