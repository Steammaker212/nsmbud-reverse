/* sub_602F335C
 * address: 0x602F335C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F335C(_BYTE *a1, int *a2, unsigned int a3)
{
  int v5; // r3
  int v6; // r1
  unsigned int U32; // r0
  unsigned int v8; // r2
  int v10; // [sp+0h] [bp-20h]
  int v11; // [sp+4h] [bp-1Ch] BYREF
  int v12; // [sp+8h] [bp-18h]
  int v13; // [sp+Ch] [bp-14h]

  a1[120] = 0;
  a1[248] = 0;
  a1[561] = 0;
  if ( a3 >= 0xD )
    a3 = 0;
  v5 = a2[1];
  v11 = *a2;
  v12 = v5;
  v13 = 1166843904;
  sub_602F2BF8(*(_DWORD *)&a1[4 * a3], (int)&v11, (int)(a1 + 548), (unsigned __int8)a1[560], 0);
  v6 = a2[1];
  v11 = *a2;
  v12 = v6;
  v13 = 1166843904;
  U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  v8 = U32 >> 30;
  if ( (unsigned __int8)a1[560] > 2u )
    v8 = (U32 >> 30) | 0x10;
  return ((int (__fastcall *)(int, int *, unsigned int, int *, int))IceFragmentHeap_ref_3EE1B0)(
           dword_60C99CDC,
           &v11,
           v8,
           &dword_60B3B98C,
           v10);
}
