/* sub_605F9840
 * address: 0x605F9840   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F9840(float *a1)
{
  float v2; // s2
  float v3; // s4
  int v5; // [sp+10h] [bp+0h]
  int v6; // [sp+14h] [bp+4h]
  int v7; // [sp+18h] [bp+8h]

  v6 = *((_DWORD *)a1 + 28);
  v7 = *((_DWORD *)a1 + 29);
  v5 = *((_DWORD *)a1 + 27);
  *((_DWORD *)a1 + 1590) = v7;
  *((_DWORD *)a1 + 1589) = v6;
  *((_DWORD *)a1 + 0x634) = v5;
  *((_DWORD *)a1 + 1587) = v7;
  *((_DWORD *)a1 + 1586) = v6;
  *((_DWORD *)a1 + 0x631) = v5;
  *((_DWORD *)a1 + 1593) = v7;
  *((_DWORD *)a1 + 1592) = v6;
  *((_DWORD *)a1 + 0x637) = v5;
  v2 = unk_60CB24E0;
  a1[0x634] = unk_60CB24E0 + a1[0x634];
  v3 = unk_60CB24E4;
  a1[1589] = unk_60CB24E4 + a1[1589];
  a1[0x631] = a1[0x631] - v2;
  a1[1586] = v3 + a1[1586];
  a1[0x637] = unk_60CB24E8 + a1[0x637];
  a1[1592] = *(float *)&dword_60CB24EC + a1[1592];
  LightSource_update2((LightSource *)(a1 + 0x63A), (Vec3 *)(a1 + 0x631), 0, a1 + 0x24, 0, 0, 0, 0);
  LightSource_update2((LightSource *)(a1 + 0x64C), (Vec3 *)(a1 + 0x634), 0, a1 + 0x24, 0, 0, 0, 0);
  LightSource_update2((LightSource *)(a1 + 1630), (Vec3 *)(a1 + 0x637), 0, a1 + 0x24, 0, 0, 0, 0);
  return sub_605F82F4((int)a1);
}
