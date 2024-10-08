/* same macros as macro.inc, but tweaked so ee-as accepts it */

.macro glabel label
    .global \label
    .type \label, @function
    .ent \label
    \label:
.endm

.macro endlabel label
    .end \label
.endm

.macro alabel label
    .global \label
    \label:
.endm

.macro dlabel label
    .global \label
    \label:
.endm

.macro jlabel label
    .global \label
    \label:
.endm

.macro ehlabel label, visibility=global
    .\visibility \label
    \label:
.endm
