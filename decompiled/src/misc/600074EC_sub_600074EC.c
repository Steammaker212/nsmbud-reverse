/* sub_600074EC
 * address: 0x600074EC   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600074EC(int a1)
{
  int v2; // r4
  int CurrentHeap_const; // r0

  v2 = ActorMgr__instance;
  if ( !ActorMgr__instance )
  {
    v2 = operator_new_8DE2C8(0x6A44u, a1, 4);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60BC0228;
    dword_60C7B3FC = v2;
    FIELD_U32(v2, 16) = 0;
    FIELD_U32(v2, 20) = 0;
    memset((void *)(v2 + 40), 0, 22880);
    FIELD_U32(v2, 24) = v2 + 40;
    FIELD_U32(v2, 28) = 520;
    FIELD_U32(v2, 32) = 0;
    FIELD_U32(v2, 36) = 0;
    FIELD_U32(v2, 22928) = 0;
    FIELD_U32(v2, 22924) = v2 + 22920;
    FIELD_U32(v2, 22920) = v2 + 22920;
    FIELD_U32(v2, 22932) = -1;
    FIELD_U32(v2, 22944) = 0;
    FIELD_U32(v2, 22940) = v2 + 22936;
    FIELD_U32(v2, 22936) = v2 + 22936;
    FIELD_U32(v2, 22948) = -1;
    FIELD_U32(v2, 22960) = 0;
    FIELD_U32(v2, 22956) = v2 + 22952;
    FIELD_U32(v2, 22952) = v2 + 22952;
    FIELD_U32(v2, 22964) = -1;
    FIELD_U32(v2, 22976) = 0;
    FIELD_U32(v2, 22972) = v2 + 22968;
    FIELD_U32(v2, 22968) = v2 + 22968;
    FIELD_U32(v2, 22980) = -1;
    FIELD_U32(v2, 22984) = 0;
    FIELD_U32(v2, 22988) = 0;
    FIELD_U32(v2, 22992) = 0;
    sub_608DEB0C((_DWORD *)(v2 + 22984), 520, v2 + 22996);
    FIELD_U32(v2, 25076) = 0;
    FIELD_U32(v2, 25080) = 0;
    FIELD_U32(v2, 25084) = 0;
    sub_608DEB0C((_DWORD *)(v2 + 25076), 520, v2 + 25088);
    CurrentHeap_const = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
    sub_60008A7C(v2 + 27168, CurrentHeap_const, 520);
    FIELD_U32(v2, 27192) = 0;
    FIELD_U8(v2, 27196) = 0;
    FIELD_U8(v2, 27200) = 0;
    FIELD_U32(v2, 22932) = 60;
    FIELD_U32(v2, 22948) = 60;
    FIELD_U32(v2, 22964) = 60;
    FIELD_U32(v2, 22980) = 68;
    ActorMgr__instance = v2;
  }
  return v2;
}
