/* sub_60953264
 * address: 0x60953264   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60953264(int a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r6
  _DWORD *v4; // r0

  v2 = (_DWORD *)(a1 + 48);
  v3 = (_DWORD *)(a1 + 64);
  *(_DWORD *)a1 = &off_60C5E974;
  v4 = (_DWORD *)(a1 + 32);
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 36) = v4;
  FIELD_U32(a1, 32) = v4;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 52) = a1 + 48;
  FIELD_U32(a1, 48) = a1 + 48;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 68) = a1 + 64;
  FIELD_U32(a1, 64) = a1 + 64;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 84) = 0;
  FIELD_U8(a1, 88) = 0;
  FIELD_U32(a1, 44) = 52;
  FIELD_U32(a1, 60) = 52;
  FIELD_U32(a1, 76) = 52;
  sub_608DE6BC(v4);
  sub_608DE6BC(v2);
  sub_608DE6BC(v3);
  return a1;
}
