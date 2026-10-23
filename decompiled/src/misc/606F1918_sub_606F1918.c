/* sub_606F1918
 * address: 0x606F1918   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F1918(int a1)
{
  int v1; // r5
  int v2; // r0
  float v3; // s16
  unsigned int U32; // r0
  int v5; // r1
  int v6; // r6
  _DWORD v8[17]; // [sp+4h] [bp-44h] BYREF

  v1 = FIELD_U32(a1, 108);
  v2 = FIELD_U32(a1, 20) & 0xF;
  v3 = FIELD_F32(dword_60CC6484, 124) + 16.0;
  if ( v2 == 1 )
  {
    v6 = ((3 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 3;
  }
  else
  {
    if ( v2 )
    {
      U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
      v5 = 6;
    }
    else
    {
      U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
      v5 = 3;
    }
    v6 = (U32 * (unsigned __int64)(unsigned int)v5) >> 32;
  }
  memset(&v8[1], 0, 40);
  v8[0] = dword_60B09450[2 * v6] | (16 * dword_60B09450[2 * v6 + 1]) | 0x10000000;
  v8[3] = Profile__get(0x23Eu);
  v8[4] = v1;
  *(float *)&v8[5] = v3;
  v8[6] = 1153138688;
  sub_600080BC((_DWORD *)ActorMgr__instance, v8);
  return 1;
}
