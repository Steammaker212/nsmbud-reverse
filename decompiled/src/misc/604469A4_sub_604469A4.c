/* sub_604469A4
 * address: 0x604469A4   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604469A4(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  _WORD v7[14]; // [sp+0h] [bp-78h] BYREF
  int v8; // [sp+1Ch] [bp-5Ch]
  char v9; // [sp+61h] [bp-17h]
  char v10; // [sp+62h] [bp-16h]
  char v11; // [sp+63h] [bp-15h]

  v4 = sub_6090B350(v7);
  v7[0] = 256;
  v9 = 1;
  v10 = 0;
  v11 = 0;
  v8 &= 0xFFFFFFF0;
  sub_6090B4B0(v4, FIELD_U32(a2, 8));
  dword_60CC78FC(*(_DWORD *)(FIELD_U32(a2, 8) + 192), FIELD_F32(a1, 5432), FIELD_F32(a1, 5428) * 0.0625, 0.0);
  if ( FIELD_U8(a1, 5448) )
    sub_60445328(FIELD_U32(a1, 420), FIELD_U32(a1, 424), FIELD_U32(a1, 5352));
  dword_60CC78FC(*(_DWORD *)(FIELD_U32(a2, 8) + 192), 0.0, 0.0, 0.0);
  v5 = sub_6090B350(v7);
  return sub_6090B4B0(v5, FIELD_U32(a2, 8));
}
