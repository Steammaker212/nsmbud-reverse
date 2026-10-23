/* sub_605876B8
 * address: 0x605876B8   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605876B8(int a1)
{
  int v2; // r5
  int v3; // r6
  int *v4; // r4
  _BYTE *v5; // r7
  int result; // r0
  ActiveColliderMgr *v7; // r6
  unsigned __int8 v8; // [sp+4h] [bp-24h] BYREF

  FIELD_U32(a1, 6304) = 0;
  FIELD_U32(a1, 6308) = 0;
  FIELD_U32(a1, 6312) = 0;
  sub_60587884(a1);
  v2 = -1;
  v3 = 0;
  v4 = (int *)(a1 + 6324);
  FIELD_U32(a1, 6324) = (FIELD_U32(a1, 24) >> 8) & 3;
  v5 = (_BYTE *)(a1 + 6342);
  do
  {
    ++v2;
    *v5 = 0;
    sub_60587FDC(a1, v2);
    v3 += (unsigned __int8)*v5;
  }
  while ( v2 < *v4 );
  result = 2;
  if ( v3 != *v4 + 1 )
  {
    if ( FIELD_U32(dword_60C99DD4, 764) == 4 )
      sub_60003D84((_DWORD *)a1);
    FIELD_U32(a1, 6336) = 0;
    FIELD_U32(a1, 6332) = FIELD_U32(a1, 108);
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 124) = -1093874483;
    FIELD_U32(a1, 128) = 0;
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    memset((void *)(a1 + 6348), 0, 80);
    v8 = 3;
    ActiveCollider_init2((ActiveCollider *)(a1 + 188), (StateActor *)a1, (ActiveColliderInfo *)&unk_60C06278, &v8, 0);
    FIELD_U32(a1, 300) = a1 + 6428;
    v7 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v7, (ActiveCollider *)(a1 + 188));
    }
    sub_605879E4(a1);
    FIELD_U32(a1, 492) = 0;
    FIELD_U32(a1, 496) = 1090519040;
    FIELD_U32(a1, 500) = 1140850688;
    FIELD_U32(a1, 504) = 1140850688;
    FIELD_U32(a1, 508) = 1124073472;
    FIELD_U32(a1, 512) = 1124073472;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAF244);
    return 1;
  }
  return result;
}
