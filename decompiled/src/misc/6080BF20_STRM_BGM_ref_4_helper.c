/* STRM_BGM_ref_4_helper
 * address: 0x6080BF20   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_ref_4_helper(int a1, int a2)
{
  float v3; // s16
  int result; // r0
  _DWORD v5[5]; // [sp+4h] [bp-14h] BYREF

  if ( (FIELD_U8(dword_60CC6B68, 28) & 4) != 0 )
  {
    if ( a2 )
    {
      v3 = 1.0;
      if ( byte_60CC6B20 )
      {
        dword_60C28730 = 0;
        dword_60C28734 = 0;
        dword_60CC6B24 = 1065353216;
      }
      else
      {
        dword_60C28730 = a2;
        dword_60C28734 = a2;
        dword_60CC6B24 = 1065353216;
        byte_60CC6B20 = 1;
      }
      byte_60CC6B10 = 1;
    }
    else
    {
      v3 = 1.0;
      dword_60C28730 = 0;
      dword_60C28734 = 0;
      dword_60CC6B24 = 1065353216;
      byte_60CC6B10 = 1;
    }
  }
  else
  {
    v3 = 0.0;
    if ( byte_60CC6B20 == 1 )
    {
      byte_60CC6B10 = 1;
      dword_60C28730 = a2;
      dword_60C28734 = a2;
      dword_60CC6B24 = 0;
      byte_60CC6B20 = 0;
    }
  }
  result = SoundSystem_instance;
  if ( FIELD_U32(SoundSystem_instance, 76) )
  {
    sub_608AE25C(v5, SoundSystem_instance + 76);
    if ( v5[0] )
      sub_608BC5E8(v5[0], 4, a2, v3);
    return sub_608AE348(v5);
  }
  return result;
}
