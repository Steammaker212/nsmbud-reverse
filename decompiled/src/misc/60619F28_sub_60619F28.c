/* sub_60619F28
 * address: 0x60619F28   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60619F28(int a1)
{
  int v2; // r1
  int *v3; // r1
  int v4; // r0
  int v5; // r1
  _DWORD v7[6]; // [sp+0h] [bp-18h] BYREF

  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6136));
  v2 = FIELD_U32(a1, 112);
  v7[0] = FIELD_U32(a1, 108);
  v7[1] = v2;
  v3 = (int *)(a1 + 164);
  v7[2] = 1065353216;
  if ( (FIELD_U32(a1, 20) & 1) != 0 )
    v3 = (int *)(a1 + 6624);
  v4 = *v3;
  if ( (FIELD_U32(a1, 20) & 1) != 0 )
    v5 = 7;
  else
    v5 = 6;
  sub_60414454(dword_60C9A698, v5, (int)v7, -v4);
  return sub_60676EFC(a1);
}
