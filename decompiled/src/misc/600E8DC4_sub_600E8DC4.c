/* sub_600E8DC4
 * address: 0x600E8DC4   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E8DC4(int a1)
{
  int v1; // r4
  int v2; // r6
  _BYTE *v3; // r7
  int v4; // r5

  v1 = a1;
  v2 = a1;
  v3 = (_BYTE *)(a1 + 8132);
  if ( FIELD_U8(a1, 8132) )
    v2 = FIELD_U32(a1, 56);
  v4 = 120;
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v2 + 716))(v2)
    && !(*(int (__fastcall **)(int))(*(_DWORD *)v2 + 720))(v2) )
  {
    v4 = 10;
    if ( *v3 )
      v1 = FIELD_U32(v1, 56);
    if ( FIELD_U8(v1, 8232) )
      return 70;
  }
  return v4;
}
