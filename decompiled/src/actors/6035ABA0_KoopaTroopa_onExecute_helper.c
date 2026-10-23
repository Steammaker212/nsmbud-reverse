/* KoopaTroopa_onExecute_helper
 * address: 0x6035ABA0   size: 544   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall KoopaTroopa_onExecute_helper(int a1)
{
  char v1; // r12
  int result; // r0
  int v4; // r7
  _DWORD *v5; // r0
  _DWORD *v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r0
  int v9; // r5
  int v10; // r6
  int v11; // r0
  Vec3 v12; // [sp+4h] [bp-84h] BYREF
  _BYTE v13[12]; // [sp+10h] [bp-78h] BYREF
  float v14; // [sp+1Ch] [bp-6Ch]
  float v15; // [sp+3Ch] [bp-4Ch]

  result = FIELD_U32(a1, 7476);
  if ( result == 1 )
  {
    result = FIELD_U8(a1, 2872);
    if ( (result & 1) != 0 )
    {
      result = FIELD_U32(a1, 6352);
      if ( result == 1 )
      {
        result = FIELD_U32(a1, 6828);
        if ( !result )
        {
          if ( ((unsigned int)&algn_60C95558[4] & ~(1614130180 << v1) & 1) == 0
            && _cxa_guard_acquire((__guard *)&algn_60C95558[4]) )
          {
            dword_60C9558C = (int)&sead__SafeStringBase__vtable;
            dword_60C95590 = (int)"foot_r";
            dword_60C95594 = (int)&sead__SafeStringBase__vtable;
            dword_60C95598 = (int)"foot_l";
            sub_60000288();
            _cxa_guard_release((__guard *)&algn_60C95558[4]);
          }
          v4 = 0;
          v5 = *(_DWORD **)(a1 + 6820);
          v6 = (_DWORD *)v5[3];
          v7 = v5[2];
          v8 = v5[17];
          if ( v7 > v8 )
            v6 += v8;
          v9 = *v6 + 4;
          do
          {
            result = sub_60418548(v9);
            if ( result == 1 )
            {
              v10 = **(_DWORD **)(a1 + 6820);
              v11 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v10 + 84))(
                      v10,
                      &dword_60C95550[2 * ((v4 & 1) == 0) + 15]);
              (*(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v10 + 108))(v10, v11, v13);
              v12.z = v15;
              v12.x = v14
                    + (float)((float)(*(float *)((char *)sinLutTable + ((FIELD_U32(a1, 160) >> 20) & 0xFF0))
                                    + (float)((float)((float)(FIELD_U32(a1, 160) & 0xFFFFFF)
                                                    * *(float *)((char *)&sinLutTable[1]
                                                               + ((FIELD_U32(a1, 160) >> 20) & 0xFF0)))
                                            * 0.000000059605))
                            * 3.0);
              v12.y = FIELD_F32(a1, 112);
              v12.z = sub_600024C4(a1);
              result = EffectData_create(dword_60B00080[(unsigned __int8)BYTE1(FIELD_U32(a1, 5956))], &v12, 0, 0);
            }
            ++v4;
          }
          while ( v4 != 4 );
        }
      }
    }
  }
  return result;
}
