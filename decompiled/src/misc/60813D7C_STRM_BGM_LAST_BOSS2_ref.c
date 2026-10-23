/* STRM_BGM_LAST_BOSS2_ref
 * address: 0x60813D7C   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_LAST_BOSS2_ref(int a1, int a2, float *a3)
{
  int result; // r0
  int *v7; // r4
  bool v8; // zf
  int v9; // r6
  int v10; // r5
  int v11; // r7
  float v12; // s0

  result = dword_60CC6B68;
  if ( (unsigned int)(FIELD_U32(dword_60CC6B68, 20) - 8) <= 9 )
  {
    result = sub_60817CA4(dword_60CC6B68, a2);
    if ( !result )
    {
      result = (int)sub_608124A4(a1, a2, a3);
      v7 = (int *)result;
      v8 = result == 0;
      if ( result )
      {
        result = *(_DWORD *)result;
        v8 = *v7 == 0;
      }
      if ( !v8 && FIELD_U32(result, 220) == 16780322 )
      {
        if ( FIELD_U32(result, 216) )
        {
          result = (unsigned __int8)byte_60CC6B60;
          if ( byte_60CC6B60 )
            return result;
        }
        else
        {
          dword_60C28B48 = 1065353216;
          byte_60CC6B60 = 0;
        }
        v9 = 1;
        if ( !sub_60808E60(SoundSystem_instance, (int)"STRM_BGM_LAST_BOSS2") )
          v9 = sub_60808E60(SoundSystem_instance, (int)"STRM_BGM_LAST_BOSS2_FAST");
        v10 = sub_60808E60(SoundSystem_instance, (int)"STRM_BGM_LAST_BOSS2_CLEAR");
        v11 = sub_60808E60(SoundSystem_instance, (int)"SE_SYS_HURRY_UP");
        v12 = *(float *)&dword_60C28B48;
        if ( v9 == 1 )
        {
          v12 = 0.0;
          dword_60C28B48 = 0;
          if ( *v7 )
          {
            sub_608B032C(*v7, 300, 0.0);
            v12 = *(float *)&dword_60C28B48;
          }
        }
        result = v11 | v9 | (v12 != 0.0);
        if ( !result )
        {
          dword_60C28B48 = 1065353216;
          result = *v7;
          if ( *v7 )
            result = sub_608B032C(result, 300, 1.0);
        }
        if ( v10 == 1 )
        {
          dword_60C28B48 = 0;
          if ( *v7 )
            sub_608B032C(*v7, 30, 0.0);
          byte_60CC6B60 = 1;
          return 0x4B2BF8u;
        }
      }
    }
  }
  return result;
}
