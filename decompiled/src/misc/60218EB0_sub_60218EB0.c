/* sub_60218EB0
 * address: 0x60218EB0   size: 920   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60218EB0(_DWORD *a1)
{
  int v1; // r7
  _DWORD *v2; // r0
  int v3; // r9
  int v4; // r10
  int v5; // r11
  _DWORD *v6; // r0
  _DWORD *v7; // r6
  _DWORD *v8; // r1
  int v9; // r2
  bool v10; // zf
  _DWORD *v11; // r0
  int v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  int v16; // r1
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int result; // r0
  _DWORD *v21; // [sp+0h] [bp-30h]

  v1 = 0;
  v21 = (_DWORD *)dword_60CC6D78;
  do
  {
    v2 = (_DWORD *)sub_601DA98C(dword_60AF2464[v1]);
    v3 = v2[22];
    v4 = v2[21];
    v5 = v2[24];
    v6 = (_DWORD *)sub_60008598(ActorMgr__instance, 894, *(_DWORD *)(ActorMgr__instance + 27172));
    v7 = *(_DWORD **)(ActorMgr__instance + 27180);
    if ( v6 != v7 )
    {
      while ( 1 )
      {
        v8 = (_DWORD *)*v6;
        if ( *v6 && v8[60] == v4 )
        {
          v9 = v8[61];
          v10 = v9 == v3;
          if ( v9 == v3 )
            v10 = v8[62] == v5;
          if ( v10 )
            break;
        }
        v6 = (_DWORD *)sub_60008598(ActorMgr__instance, 894, (int)(v6 + 1));
        if ( v6 == v7 )
          goto LABEL_12;
      }
      a1[v1 + 7] = v8[2];
    }
LABEL_12:
    ++v1;
  }
  while ( v1 != 4 );
  v11 = (_DWORD *)ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[7]);
  if ( v11
    && v11[60] == v21[103]
    && v11[61] == v21[104]
    && v11[62] == v21[105]
    && (v12 = a1[5], ((0xA4Au >> v12) & 1) != 0)
    || (v13 = (_DWORD *)ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[8])) != 0
    && v13[60] == v21[103]
    && v13[61] == v21[104]
    && v13[62] == v21[105]
    && (v12 = a1[5], ((0x552u >> v12) & 1) != 0)
    || (v14 = (_DWORD *)ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[9])) != 0
    && v14[60] == v21[103]
    && v14[61] == v21[104]
    && v14[62] == v21[105]
    && (v12 = a1[5], ((0x495u >> v12) & 1) != 0)
    || (v15 = (_DWORD *)ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[10])) != 0
    && v15[60] == v21[103]
    && v15[61] == v21[104]
    && v15[62] == v21[105]
    && (v12 = a1[5], ((0x2A9u >> v12) & 1) != 0) )
  {
    v16 = 12;
    if ( v12 > 0 )
      v16 = v12 - 1;
    a1[5] = v16;
  }
  v17 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[7]);
  if ( v17 && ((0xA4Au >> a1[5]) & 1) == 0 )
    sub_602187E0(v17);
  v18 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[8]);
  if ( v18 && ((0x552u >> a1[5]) & 1) == 0 )
    sub_602187E0(v18);
  v19 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[9]);
  if ( v19 && ((0x495u >> a1[5]) & 1) == 0 )
    sub_602187E0(v19);
  result = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[10]);
  if ( result )
  {
    if ( ((0x2A9u >> a1[5]) & 1) == 0 )
      return sub_602187E0(result);
  }
  return result;
}
