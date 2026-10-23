/* sub_607D26C8
 * address: 0x607D26C8   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607D26C8(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  RevealMaskRelated *v5; // r0
  RevealMaskRelated *v6; // r0

  v2 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 84) = (unsigned __int8)v2 >> 4;
  FIELD_U32(a1, 648) = v2 & 0xF;
  StageActor__updateZoneId((StageActor *)a1);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C260F0, 0);
  v3 = FIELD_U32(a1, 648);
  if ( v3 == 1 )
  {
    v4 = 21;
    goto LABEL_5;
  }
  if ( !v3 )
  {
    v4 = 20;
LABEL_5:
    FIELD_U32(a1, 328) = v4;
  }
  FIELD_U32(a1, 652) = 0;
  FIELD_U32(a1, 620) = a1 + 760;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1086324736;
  FIELD_U32(a1, 504) = 1086324736;
  FIELD_U32(a1, 516) = 1098907648;
  FIELD_U32(a1, 520) = 1098907648;
  FIELD_U32(a1, 524) = 1111490560;
  FIELD_U32(a1, 528) = 1111490560;
  FIELD_U32(a1, 508) = 1117782016;
  FIELD_U32(a1, 512) = 1107296256;
  v5 = (RevealMaskRelated *)operator_new(0x28u);
  v6 = LightMask__ctor(v5);
  FIELD_U32(a1, 644) = v6;
  (*(void (__fastcall **)(RevealMaskRelated *, _DWORD, int))FIELD_U32(v6, 0x0))(v6, 0, 2);
  return 1;
}
