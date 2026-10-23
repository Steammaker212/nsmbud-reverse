/* sub_60602AA8
 * address: 0x60602AA8   size: 824   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_60602AA8(int a1, _DWORD *a2, int a3)
{
  int v4; // r4
  int v5; // r5
  unsigned __int8 *v6; // r7
  unsigned __int64 v7; // r0
  int v8; // r8
  unsigned __int8 *v9; // r2
  int v10; // r3
  _DWORD *v11; // r3
  int v12; // r7
  int v13; // r6
  ColliderBase *v14; // r5
  StateActor *v15; // r1
  int v16; // r2
  _DWORD *v17; // r5
  unsigned __int8 v18; // r0
  int v19; // r6
  ActiveColliderMgr *v20; // r7
  int v21; // r2
  char *v22; // r8
  int v23; // r9
  unsigned int v24; // r11
  unsigned int v25; // r0
  char *v26; // r10
  int v27; // r0
  _DWORD *v28; // r4
  unsigned int v29; // r0
  char *v30; // r0
  float *v31; // r5
  float v32; // s2
  int *p_settings1; // r4
  double v34; // d0
  int v36; // s2
  unsigned __int8 *v37; // [sp+4h] [bp-44h]
  int v38; // [sp+10h] [bp-38h]
  int v39; // [sp+14h] [bp-34h]
  StateActor *owner; // [sp+20h] [bp-28h]

  v4 = 0;
  FIELD_U32(a1, 6112) = a3;
  v6 = (unsigned __int8 *)(a1 + 6101);
  v5 = FIELD_U8(a1, 6101);
  v7 = 0x100000000uLL / FIELD_U8(a1, 6101);
  HIDWORD(v7) = a1;
  v37 = v6;
  owner = (StateActor *)a1;
  if ( v5 )
  {
    v8 = a1 + 6116;
    v9 = (unsigned __int8 *)(a1 + 6100);
    do
    {
      v10 = 0;
      if ( (unsigned int)v4 < 4 )
        v10 = v4;
      v11 = (_DWORD *)(HIDWORD(v7) + 220 * v10);
      v12 = a2[2];
      v11[1717] = *v9;
      HIDWORD(v7) = owner;
      v11[1718] = v8;
      v11[1714] = LODWORD(FIELD_F32(owner, 0x6C));
      v11[1715] = LODWORD(FIELD_F32(owner, 0x70));
      v11[1716] = LODWORD(FIELD_F32(owner, 0x74));
      v13 = v4 * v7;
      ++v4;
      v11[1720] = v13;
      v11[1719] = v12;
      v6 = v37;
    }
    while ( v4 < *v37 );
  }
  v14 = (ColliderBase *)(HIDWORD(v7) + 6160);
  ShapedCollider_init(
    (ShapedCollider *)(HIDWORD(v7) + 6160),
    (StageActor *)HIDWORD(v7),
    (ShapedColliderInfo *)(HIDWORD(v7) + 6816));
  owner[1]._._.aCollider.createNode.prev = (ActiveColliderNode *)&FIELD_U8(owner, 0x57);
  owner[1]._._.aCollider.createNode.next = (ActiveColliderNode *)&FIELD_U8(owner, 0x56);
  owner[1]._._.aCollider.field_D0 = (int)&owner[1]._.collisionMgr[104];
  ColliderMgr_add(ColliderMgr_instance, v14);
  v15 = owner;
  v16 = 28;
  v17 = a2;
  if ( BYTE1(owner[1]._._._.id) == 1 )
    v16 = 27;
  v38 = v16;
  v18 = *v6;
  if ( *v6 )
  {
    v19 = 0;
    v20 = ActiveColliderMgr_instance;
    do
    {
      v21 = 0;
      if ( (unsigned int)v19 < 4 )
        v21 = v19;
      v22 = (char *)v15 + 220 * v21;
      v23 = *((_DWORD *)v22 + 1717);
      if ( v23 >= 1 )
      {
        v24 = 0;
        v39 = v23 * v19;
        do
        {
          v25 = v39 + v24;
          if ( v39 + v24 >= 0x40 )
            v25 = 0;
          v26 = (char *)v15 + 304 * v25;
          ActiveCollider__init((ActiveCollider *)(v26 + 7736), &FIELD_U32(v15, 0x0), &stru_60C0EC84, 0);
          v27 = *v17;
          v28 = v17;
          *((_DWORD *)v26 + 1966) = v17[1];
          *((_DWORD *)v26 + 1965) = v27;
          v29 = 0;
          if ( v24 < 0x10 )
            v29 = v24;
          v30 = &v22[12 * v29];
          v31 = (float *)(v30 + 6884);
          v32 = *((float *)v30 + 1722) - *((float *)v22 + 1715);
          *((float *)v26 + 1963) = *((float *)v30 + 1721) - *((float *)v22 + 1714);
          *((float *)v26 + 1964) = v32;
          if ( !ActiveColliderMgr_isInActiveList(v20, (ActiveCollider *)(v26 + 7736))
            && !ActiveColliderMgr_isInCreateList(v20, (ActiveCollider *)(v26 + 7736)) )
          {
            ActiveColliderMgr_addToCreateList(v20, (ActiveCollider *)(v26 + 7736));
          }
          sub_60414344((sead_ListNode *)dword_60C9A698, v38, v31);
          v15 = owner;
          ++v24;
          v17 = v28;
        }
        while ( v23 != v24 );
        v18 = *v37;
      }
      ++v19;
    }
    while ( v19 < v18 );
  }
  p_settings1 = &v15[1]._._._.settings1;
  v34 = ((double (__fastcall *)(int *))*(_DWORD *)v15[1]._._._.settings1)(&v15[1]._._._.settings1);
  FIELD_F64(p_settings1, 1) = v34;
  p_settings1[3] = v36;
  return (char *)(p_settings1 + 1);
}
