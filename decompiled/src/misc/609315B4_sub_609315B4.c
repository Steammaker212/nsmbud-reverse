/* sub_609315B4
 * address: 0x609315B4   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609315B4(_DWORD *a1)
{
  int v1; // r1
  int v2; // r12
  int v3; // r3
  int v4; // r3
  int v5; // r3
  int v6; // r2
  int v7; // r3
  int v8; // r3

  v1 = a1[26];
  v2 = a1[10];
  v3 = **(_DWORD **)(v1 + 836);
  if ( a1[27] )
  {
    FIELD_U32(v3, 584) = v2;
    v4 = **(_DWORD **)(v1 + 836);
    FIELD_U32(v4, 620) = a1[19];
    FIELD_U32(v4, 624) = a1[20];
    v5 = **(_DWORD **)(v1 + 836);
    FIELD_U32(v5, 640) = a1[24];
    FIELD_U32(v5, 644) = a1[25];
    v6 = **(_DWORD **)(v1 + 836) + 588;
  }
  else
  {
    FIELD_U32(v3, 508) = v2;
    v7 = **(_DWORD **)(v1 + 836);
    FIELD_U32(v7, 544) = a1[19];
    FIELD_U32(v7, 548) = a1[20];
    v8 = **(_DWORD **)(v1 + 836);
    FIELD_U32(v8, 564) = a1[24];
    FIELD_U32(v8, 568) = a1[25];
    v6 = **(_DWORD **)(v1 + 836) + 512;
  }
  FIELD_U32(v6, 12) = a1[14];
  FIELD_U32(v6, 16) = a1[15];
  return sub_6092DC18(v1 + 32);
}
