/* sub_60621028
 * address: 0x60621028   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60621028(_DWORD *a1)
{
  unsigned int v2; // r7
  _BYTE *v3; // r0
  ActiveColliderMgr *v4; // r5
  ActiveColliderMgr *v5; // r6
  ActorBuildInfo v7; // [sp+4h] [bp-44h] BYREF

  a1[1579] = 1115684864;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 676))(a1);
  a1[160] = 0;
  v2 = a1[5];
  a1[1578] = (v2 >> 20) & 0xF;
  a1[1576] = v2 >> 28;
  if ( v2 >> 28 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a1 + 668))(a1);
    a1[1577] = *((_BYTE *)a1 + 23) & 0xF;
    (*(void (__fastcall **)(_DWORD *))(*a1 + 680))(a1);
    if ( a1[1577] )
    {
      a1[36] = 0;
      a1[37] = 0;
      a1[38] = 0;
      (*(void (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60CB38BC);
    }
    else
    {
      a1[36] = 1065353216;
      a1[37] = 1065353216;
      a1[38] = 1065353216;
      (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CB38E0);
      v4 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 47))
        && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 47)) )
      {
        ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 47));
      }
      v5 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 1583))
        && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 1583)) )
      {
        ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 1583));
      }
    }
    if ( FIELD_U32(dword_60C99DD4, 764) == 4 )
      sub_60003D84(a1);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 672))(a1);
  }
  else
  {
    a1[1577] = 0;
    memset(&v7.settings2, 0, 40);
    v7.settings1 = v2 | 0x10000000;
    v7.position = *(Vec3 *)((_BYTE *)a1 + 9);
    v7.field_20 = *((_BYTE *)a1 + 86);
    v7.profile = (Profile *)a1[3];
    v3 = ActorMgr__create((void *)ActorMgr__instance, &v7, 0);
    if ( v3 )
      a1[1580] = *((_DWORD *)v3 + 2);
    *((_WORD *)a1 + 3138) = 0;
    (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CB3898);
    a1[1577] = 2;
  }
  return 1;
}
