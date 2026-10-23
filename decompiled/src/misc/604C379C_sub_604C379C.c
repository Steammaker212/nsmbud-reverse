/* sub_604C379C
 * address: 0x604C379C   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C379C(int a1)
{
  if ( FIELD_U8(a1, 13936) )
  {
    sub_60474420((_DWORD *)(a1 + 48), 0x11u, &dword_60CA2AF4, FIELD_U32(a1, 13944), 0);
    FIELD_U8(a1, 13909) = 1;
    FIELD_U8(a1, 13940) = 1;
  }
  if ( FIELD_U8(a1, 13937) )
  {
    sub_60474420((_DWORD *)(a1 + 48), 0x12u, &dword_60CA2AF4, FIELD_U32(a1, 13948), 0);
    FIELD_U8(a1, 13910) = 1;
    FIELD_U8(a1, 13941) = 1;
  }
  if ( FIELD_U8(a1, 13938) )
  {
    sub_60474420((_DWORD *)(a1 + 48), 0x13u, &dword_60CA2AF4, FIELD_U32(a1, 13952), 0);
    FIELD_U8(a1, 13911) = 1;
    FIELD_U8(a1, 13942) = 1;
  }
  if ( FIELD_U8(a1, 13939) )
  {
    sub_60474420((_DWORD *)(a1 + 48), 0x14u, &dword_60CA2AF4, FIELD_U32(a1, 13956), 0);
    FIELD_U8(a1, 13912) = 1;
    FIELD_U8(a1, 13943) = 1;
  }
  FIELD_U8(a1, 14020) = 1;
  FIELD_U8(a1, 14019) = 1;
  FIELD_U8(a1, 14016) = 1;
  FIELD_U8(a1, 14015) = 1;
  FIELD_U8(a1, 14018) = 1;
  FIELD_U8(a1, 14017) = 1;
  FIELD_U8(a1, 14021) = 0;
  FIELD_U8(a1, 14022) = 1;
  FIELD_U8(a1, 14023) = 1;
  FIELD_U8(a1, 14024) = 0;
  FIELD_U8(a1, 14025) = 0;
  ((void (__fastcall *)(int))loc_604C6EF0)(a1);
  G_Flag_00_ref(a1);
  sub_604C6B78(a1);
  sub_60502548(a1 + 4056);
  FIELD_U8(a1, 14182) = 1;
  FIELD_U8(a1, 14172) = 0;
  return sub_60816CB0(dword_60CC6B68);
}
