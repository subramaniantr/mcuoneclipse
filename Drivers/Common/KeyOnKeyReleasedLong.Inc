%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralEvent.inc (OnKeyReleasedLong)
%;**     Description :
%;**         Event generated after a key has been released (long key
%;**         press).
%include Common\GeneralParameters.inc(27)
%;**         keys%Parkeys %>27 - the key(s) pressed, as bitset (e.g. 1 is
%;** %>29 key 1, 2 is key 2, 4 is key 3, ....)
%include Common\GeneralReturnNothing.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine