/* sub_601C5718
 * address: 0x601C5718   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C5718(int a1)
{
  int v1; // r1
  int v2; // r2
  unsigned int v3; // r1
  bool v4; // zf

  v1 = FIELD_U32(a1, 264);
  if ( v1 >= 6 )
  {
    v3 = 0;
    if ( FIELD_U32(dword_60C99DEC, 48) == 7 )
      goto LABEL_16;
    v3 = 1;
    if ( FIELD_U32(dword_60C99DEC, 120) == 7 )
      goto LABEL_16;
    v3 = 2;
    if ( FIELD_U32(dword_60C99DEC, 192) == 7 )
      goto LABEL_16;
    v3 = 3;
    if ( FIELD_U32(dword_60C99DEC, 264) == 7 )
      goto LABEL_16;
    v3 = 4;
    if ( FIELD_U32(dword_60C99DEC, 336) == 7 )
      goto LABEL_16;
    v3 = 6;
    v4 = FIELD_U32(dword_60C99DEC, 408) == 7;
  }
  else
  {
    v2 = dword_60AFC220[v1];
    v3 = 0;
    if ( FIELD_U32(dword_60C99DEC, 48) == v2 )
      goto LABEL_16;
    v3 = 1;
    if ( FIELD_U32(dword_60C99DEC, 120) == v2 )
      goto LABEL_16;
    v3 = 2;
    if ( FIELD_U32(dword_60C99DEC, 192) == v2 )
      goto LABEL_16;
    v3 = 3;
    if ( FIELD_U32(dword_60C99DEC, 264) == v2 )
      goto LABEL_16;
    v3 = 4;
    if ( FIELD_U32(dword_60C99DEC, 336) == v2 )
      goto LABEL_16;
    v3 = 6;
    v4 = FIELD_U32(dword_60C99DEC, 408) == v2;
  }
  if ( v4 )
    v3 = 5;
LABEL_16:
  if ( v3 >= 6 )
    v3 = 0;
  return dword_60C99DEC + 72 * v3 + 36;
}
