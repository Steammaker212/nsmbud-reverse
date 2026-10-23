/* sub_6091BD9C
 * address: 0x6091BD9C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091BD9C(int a1)
{
  int v2; // r0
  bool v3; // zf
  char *v4; // r5
  char v5; // r0
  _DWORD v7[7]; // [sp+4h] [bp-1Ch] BYREF

  *(_DWORD *)a1 = off_60C5D608;
  sub_6091BE6C(a1);
  v2 = *(_DWORD *)(FIELD_U32(a1, 4) + 52);
  v3 = v2 == 0;
  if ( v2 )
  {
    v2 = FIELD_U32(a1, 20);
    v3 = v2 == 0;
  }
  if ( !v3 )
  {
    v7[0] = v2;
    v7[1] = FIELD_U32(a1, 24);
    v7[2] = FIELD_U32(a1, 28);
    sub_60913ABC((int)v7);
  }
  if ( !FIELD_U16(a1, 10) )
  {
    v4 = *(char **)(a1 + 4);
    if ( v4 )
    {
      sub_6091E220(v4 + 8);
      operator_delete(v4);
    }
    FIELD_U32(a1, 4) = 0;
  }
  v5 = FIELD_U8(a1, 8);
  if ( (v5 & 1) != 0 )
  {
    dword_60CC73B4(a1 + 728);
    v5 = FIELD_U8(a1, 8);
  }
  FIELD_U8(a1, 8) = v5 & 0xFE;
  sub_60918DB8(a1 + 16);
  return a1;
}
