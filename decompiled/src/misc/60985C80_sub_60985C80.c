/* sub_60985C80
 * address: 0x60985C80   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60985C80(int a1, int a2, float result)
{
  float v5; // s0
  float v6; // s16
  float v7; // r0
  float v8; // [sp+4h] [bp-7Ch] BYREF
  float v9; // [sp+8h] [bp-78h] BYREF
  int v10; // [sp+Ch] [bp-74h]
  int v11; // [sp+3Ch] [bp-44h]

  if ( FIELD_U16(a1, 214) )
  {
    if ( sub_6085E5DC(a1) )
    {
      v8 = 0.0;
      if ( (*(int (__fastcall **)(int, float *))(*(_DWORD *)a1 + 172))(a1, &v8) == 1 )
      {
        if ( !a2 )
        {
          v5 = FIELD_F32(a1, 268);
          if ( v5 > 0.0 )
          {
            v10 = FIELD_U32(a1, 196);
            v9 = v5;
            sub_6085E5E4(a1, &v9);
          }
        }
        v6 = 0.0;
        if ( FIELD_U16(a1, 214) && sub_6085E5DC(a1) )
        {
          sub_6084E138((int)&v9);
          (*(void (__fastcall **)(int, float *))(*(_DWORD *)a1 + 140))(a1, &v9);
          v11 = 2139095039;
          v6 = ((float (__fastcall *)(float *, _DWORD, _DWORD))loc_6084E1C8)(
                 &v9,
                 FIELD_U32(a1, 172),
                 FIELD_U16(a1, 214));
          j_nullsub_88_0();
        }
        result = FIELD_F32(a1, 56);
        if ( v6 > result )
        {
          v7 = FIELD_F32(a1, 192);
          v10 = FIELD_U32(a1, 196);
          v9 = v7;
          if ( FIELD_F32(a1, 268) == 0.0 )
            FIELD_F32(a1, 268) = v7;
          v9 = (*(float (__fastcall **)(_DWORD, int, float, float))(**(_DWORD **)(a1 + 208) + 44))(
                 FIELD_U32(a1, 208),
                 a1,
                 v6,
                 v8)
             * v7;
          return sub_6085E5E4(a1, &v9);
        }
      }
    }
  }
  return result;
}
