/* SE_SYS_MAP_VIEW_ZOOM_ref
 * address: 0x604C7A8C   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_MAP_VIEW_ZOOM_ref(int a1)
{
  int v2; // r5
  float v3; // s0
  _BYTE *v4; // r6
  _BYTE *v5; // r6

  v2 = sub_601FEE28(dword_60C8C188);
  v4 = (_BYTE *)(a1 + 4560);
  if ( FIELD_U8(v2, 1377) )
  {
    if ( FIELD_U8(a1, 4560) )
    {
      sub_6047EEC4(a1 + 4096, 4, v3);
      *v4 = 0;
    }
    FIELD_U32(a1, 14152) = 0;
  }
  else
  {
    if ( !FIELD_U8(a1, 4560) )
    {
      sub_6047F0B0((_DWORD *)(a1 + 4096), 4);
      *v4 = 1;
    }
    if ( FIELD_U32(a1, 14152) == 1 && !(FIELD_U32(dword_60C9CFB8, 76) + FIELD_U32(dword_60C9CFB8, 72)) )
      sub_60808374(SoundSystem_instance, "SE_SYS_MAP_VIEW_ZOOM_IN_LV", 0, 0);
  }
  v5 = (_BYTE *)(a1 + 4561);
  if ( FIELD_U8(v2, 1378) )
  {
    if ( FIELD_U8(a1, 4561) )
    {
      sub_6047EEC4(a1 + 4096, 5, v3);
      *v5 = 0;
    }
    FIELD_U32(a1, 14152) = 0;
  }
  else
  {
    if ( !FIELD_U8(a1, 4561) )
    {
      sub_6047F0B0((_DWORD *)(a1 + 4096), 5);
      *v5 = 1;
    }
    if ( FIELD_U32(a1, 14152) == 2 && !(FIELD_U32(dword_60C9CFB8, 76) + FIELD_U32(dword_60C9CFB8, 72)) )
      sub_60808374(SoundSystem_instance, "SE_SYS_MAP_VIEW_ZOOM_OUT_LV", 0, 0);
  }
  FIELD_U8(a1, 14190) = 0;
  return 14190;
}
