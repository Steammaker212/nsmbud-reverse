/* sub_60676B28
 * address: 0x60676B28   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60676B28(int a1)
{
  int v2; // r0
  __int64 v3; // r0
  int v4; // r2
  RevealMaskRelated *v5; // r0
  RevealMaskRelated *v6; // r0
  int *v7; // r1

  v2 = (FIELD_U32(a1, 20) >> 12) & 3;
  FIELD_U8(a1, 6130) = v2;
  if ( (unsigned int)(v2 - 1) > 1 )
  {
    FIELD_U8(a1, 6104) = 1;
  }
  else if ( FIELD_U8(a1, 539) )
  {
    v3 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
    v4 = EventMgr__instance;
    if ( (FIELD_U64(EventMgr__instance, 16) & v3) != 0 )
    {
      FIELD_U8(a1, 6104) = 1;
      FIELD_U8(a1, 84) = FIELD_U8(v4, 2328);
    }
  }
  FIELD_U8(a1, 6128) = BYTE1(FIELD_U32(a1, 20)) & 3;
  FIELD_U8(a1, 6129) = FIELD_U8(a1, 28);
  v5 = (RevealMaskRelated *)operator_new(0x28u);
  v6 = LightMask__ctor(v5);
  FIELD_U32(a1, 6100) = v6;
  (*(void (__fastcall **)(RevealMaskRelated *, _DWORD, int))FIELD_U32(v6, 0x0))(v6, 0, 2);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 204))(a1);
  if ( sub_60676C54(a1) )
    v7 = &dword_60CB7C70;
  else
    v7 = &dword_60CB7C50;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)v7);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 216))(a1);
  return 1;
}
