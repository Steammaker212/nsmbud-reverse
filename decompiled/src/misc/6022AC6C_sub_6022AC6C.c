/* sub_6022AC6C
 * address: 0x6022AC6C   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022AC6C(int a1, int a2)
{
  int result; // r0

  sub_6019EC34((_DWORD *)a1, (_DWORD *)a2);
  FIELD_U8(a1, 12) = FIELD_U8(a2, 12);
  sub_6019EC34((_DWORD *)(a1 + 16), (_DWORD *)a2);
  FIELD_U8(a1, 28) = FIELD_U8(a2, 12);
  sub_6019EC34((_DWORD *)(a1 + 32), (_DWORD *)a2);
  FIELD_U8(a1, 44) = FIELD_U8(a2, 12);
  sub_6019EC34((_DWORD *)(a1 + 48), (_DWORD *)a2);
  FIELD_U8(a1, 60) = FIELD_U8(a2, 12);
  sub_6019EC34((_DWORD *)(a1 + 64), (_DWORD *)a2);
  FIELD_U8(a1, 76) = FIELD_U8(a2, 12);
  sub_6019EC34((_DWORD *)(a1 + 80), (_DWORD *)a2);
  FIELD_U8(a1, 92) = FIELD_U8(a2, 12);
  sub_6019EC34((_DWORD *)(a1 + 96), (_DWORD *)a2);
  FIELD_U8(a1, 108) = FIELD_U8(a2, 12);
  sub_6019EC34((_DWORD *)(a1 + 112), (_DWORD *)a2);
  FIELD_U8(a1, 124) = FIELD_U8(a2, 12);
  sub_6019EC34((_DWORD *)(a1 + 128), (_DWORD *)a2);
  FIELD_U8(a1, 140) = FIELD_U8(a2, 12);
  sub_6019EC34((_DWORD *)(a1 + 144), (_DWORD *)a2);
  FIELD_U8(a1, 156) = FIELD_U8(a2, 12);
  sub_6019EC34((_DWORD *)(a1 + 160), (_DWORD *)a2);
  FIELD_U8(a1, 172) = FIELD_U8(a2, 12);
  sub_6019EC34((_DWORD *)(a1 + 176), (_DWORD *)a2);
  FIELD_U8(a1, 188) = FIELD_U8(a2, 12);
  sub_6019EC34((_DWORD *)(a1 + 192), (_DWORD *)a2);
  FIELD_U8(a1, 204) = FIELD_U8(a2, 12);
  sub_6019EC34((_DWORD *)(a1 + 208), (_DWORD *)a2);
  FIELD_U8(a1, 220) = FIELD_U8(a2, 12);
  sub_6019EC34((_DWORD *)(a1 + 224), (_DWORD *)a2);
  FIELD_U8(a1, 236) = FIELD_U8(a2, 12);
  sub_6019EC34((_DWORD *)(a1 + 240), (_DWORD *)a2);
  result = FIELD_U8(a2, 12);
  FIELD_U8(a1, 252) = result;
  return result;
}
