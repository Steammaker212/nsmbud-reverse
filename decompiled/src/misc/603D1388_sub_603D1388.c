/* sub_603D1388
 * address: 0x603D1388   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D1388(int a1)
{
  int v2; // r0
  int *v3; // r5
  int result; // r0
  int ProfileId; // r0
  int *v6; // r1
  _DWORD v7[3]; // [sp+4h] [bp-4Ch] BYREF
  _BYTE v8[4]; // [sp+10h] [bp-40h] BYREF
  _DWORD v9[3]; // [sp+14h] [bp-3Ch] BYREF
  Profile *v10; // [sp+20h] [bp-30h]
  int v11; // [sp+24h] [bp-2Ch]
  int v12; // [sp+28h] [bp-28h]
  int v13; // [sp+2Ch] [bp-24h]
  int v14; // [sp+30h] [bp-20h]
  int v15; // [sp+34h] [bp-1Ch]
  int v16; // [sp+38h] [bp-18h]
  int v17; // [sp+3Ch] [bp-14h]

  v3 = (int *)(a1 + 6108);
  v2 = FIELD_U32(a1, 6108);
  if ( !v2 || (result = v2 - 1, (*v3 = result) == 0) )
  {
    result = FIELD_U32(a1, 40);
    if ( !result )
    {
      v8[0] = 0;
      result = sub_603D1790(a1, v8);
      if ( v8[0] )
      {
        result ^= 1u;
        if ( !result )
        {
          ((void (__fastcall *)(int, _DWORD *, _BYTE *))loc_603D1BFC)(a1, v7, v8);
          v17 = 0;
          v16 = 0;
          v15 = 0;
          v14 = 0;
          v13 = 0;
          v12 = 0;
          v11 = 0;
          v10 = 0;
          v9[0] = FIELD_U32(a1, 6112) | 0x80100000;
          v9[1] = 0;
          v9[2] = FIELD_U32(a1, 8);
          ProfileId = Actor__getProfileId((Actor *)a1);
          if ( ProfileId == 543 )
          {
            v6 = &dword_60AF3580;
          }
          else
          {
            v6 = &dword_60AF3570;
            if ( ProfileId == 544 )
              v6 = &dword_60AF3588;
          }
          v10 = Profile__get(*v6);
          v11 = v7[0];
          v12 = v7[1];
          v13 = v7[2];
          LOBYTE(v15) = FIELD_U8(a1, 86);
          sub_600080BC((_DWORD *)ActorMgr__instance, v9);
          if ( (unsigned __int8)FIELD_U32(a1, 20) >> 4 )
            result = 30 * ((unsigned __int8)FIELD_U32(a1, 20) >> 4);
          else
            result = ((420 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 30;
          *v3 = result;
        }
      }
    }
  }
  return result;
}
