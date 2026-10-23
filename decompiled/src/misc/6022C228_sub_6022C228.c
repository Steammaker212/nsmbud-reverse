/* sub_6022C228
 * address: 0x6022C228   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022C228(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r1
  int v8; // r2
  _DWORD v10[3]; // [sp+0h] [bp-28h] BYREF
  char v11; // [sp+Ch] [bp-1Ch]

  v11 = 1;
  memset(v10, 255, sizeof(v10));
  sub_6019EC34((_DWORD *)(a1 + 16), v10);
  FIELD_U8(a1, 28) = v11;
  sub_6019EC34((_DWORD *)(a1 + 32), v10);
  FIELD_U8(a1, 44) = v11;
  sub_6019EC34((_DWORD *)(a1 + 48), v10);
  FIELD_U8(a1, 60) = v11;
  sub_6019EC34((_DWORD *)(a1 + 64), v10);
  FIELD_U8(a1, 76) = v11;
  FIELD_U32(a1, 80) = 0;
  v6 = a1;
  if ( a3 == -1 )
  {
    sub_6022CD28(a1, a2, 0);
    sub_6022CD28(a1, a2, 1);
    sub_6022CD28(a1, a2, 2);
    sub_6022CD28(a1, a2, 3);
    sub_6022CD28(a1, a2, 4);
    sub_6022CD28(a1, a2, 5);
    sub_6022CD28(a1, a2, 6);
    sub_6022CD28(a1, a2, 7);
    v6 = a1;
    v7 = a2;
    v8 = 8;
  }
  else
  {
    v7 = a2;
    v8 = a3;
  }
  sub_6022CD28(v6, v7, v8);
  return FIELD_U32(a1, 80);
}
