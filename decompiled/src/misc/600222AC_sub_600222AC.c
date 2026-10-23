/* sub_600222AC
 * address: 0x600222AC   size: 612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600222AC(int a1, int a2, float a3)
{
  float v5; // s16
  float v6; // [sp+4h] [bp-2Ch] BYREF
  float v7; // [sp+8h] [bp-28h]
  int v8; // [sp+Ch] [bp-24h]

  v5 = a3 + 8.0;
  if ( sub_6078A4C8(PlayerMgr_instance, 0) == 1 )
  {
    if ( (*(_BYTE *)(FIELD_U32(PlayerMgr_instance, 32) + 1219) & 8) != 0 )
    {
      v6 = FIELD_F32(dword_60CC6484, 112) + 16.0;
      v7 = v5;
      v8 = 0;
      sub_60022540(0, &v6, 8, 0, a2);
      v5 = v5 + 16.0;
    }
    else
    {
      sub_600221A0(a1, 8, 0, a2);
    }
  }
  if ( sub_6078A4C8(PlayerMgr_instance, 1) == 1 )
  {
    if ( (*(_BYTE *)(FIELD_U32(PlayerMgr_instance, 36) + 1219) & 8) != 0 )
    {
      v6 = FIELD_F32(dword_60CC6484, 112) + 16.0;
      v7 = v5;
      v8 = 0;
      sub_60022540(0, &v6, 8, 1, a2);
      v5 = v5 + 16.0;
    }
    else
    {
      sub_600221A0(a1, 8, 1u, a2);
    }
  }
  if ( sub_6078A4C8(PlayerMgr_instance, 2) == 1 )
  {
    if ( (*(_BYTE *)(FIELD_U32(PlayerMgr_instance, 40) + 1219) & 8) != 0 )
    {
      v6 = FIELD_F32(dword_60CC6484, 112) + 16.0;
      v7 = v5;
      v8 = 0;
      sub_60022540(0, &v6, 8, 2, a2);
      v5 = v5 + 16.0;
    }
    else
    {
      sub_600221A0(a1, 8, 2u, a2);
    }
  }
  if ( sub_6078A4C8(PlayerMgr_instance, 3) == 1 )
  {
    if ( (*(_BYTE *)(FIELD_U32(PlayerMgr_instance, 44) + 1219) & 8) != 0 )
    {
      v6 = FIELD_F32(dword_60CC6484, 112) + 16.0;
      v7 = v5;
      v8 = 0;
      sub_60022540(0, &v6, 8, 3, a2);
    }
    else
    {
      sub_600221A0(a1, 8, 3u, a2);
    }
  }
}
