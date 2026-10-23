/* sub_600AABEC
 * address: 0x600AABEC   size: 724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600AABEC(int a1)
{
  int **v2; // r6
  int v3; // r0
  int result; // r0
  int v5; // r0
  int (__fastcall *v6)(int, _DWORD *); // r2
  int v7; // r0
  _DWORD *v8; // r1
  unsigned int v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  int v12; // r8
  int v13; // r11
  int v14; // r6
  char v15; // r12
  __int16 *v16; // r4
  int v17; // t1
  int v18; // r1
  unsigned int v19; // r0
  _DWORD *v20; // [sp+0h] [bp-68h]
  _DWORD v21[21]; // [sp+14h] [bp-54h] BYREF

  v2 = (int **)(a1 + 7096);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionMgr_process((_BYTE *)(a1 + 648));
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1108))(a1);
  sub_600B33DC(a1, v3);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1);
  result = FIELD_U32(a1, 7092);
  if ( result == 2 )
  {
    v18 = (*v2)[3];
    v19 = (*v2)[17];
    if ( (*v2)[2] > v19 )
      v18 += 4 * v19;
    result = *(unsigned __int8 *)(*(_DWORD *)v18 + 28);
    if ( (result & 0x20) != 0 )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C832D8);
  }
  else if ( result == 1 )
  {
    v5 = **v2;
    v6 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v5 + 84);
    v21[0] = &sead__SafeStringBase__vtable;
    v21[1] = "ef_wand";
    v7 = v6(v5, v21);
    (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v2 + 108))(**v2, v7, v21);
    sub_602372C0(a1 + 8528, 1058, v21, 0);
    v8 = (_DWORD *)(*v2)[3];
    v9 = (*v2)[17];
    if ( (*v2)[2] > v9 )
      v8 += v9;
    if ( sub_60418548(*v8 + 4) )
      goto LABEL_9;
    v10 = (*v2)[3];
    v11 = (*v2)[17];
    if ( (*v2)[2] > v11 )
      v10 += 4 * v11;
    result = *(unsigned __int8 *)(*(_DWORD *)v10 + 28);
    if ( (result & 0x20) != 0 )
    {
LABEL_9:
      v20 = (_DWORD *)(a1 + 7092);
      v12 = 0;
      v13 = a1 + 8120;
      do
      {
        v14 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *(_DWORD *)(v13 + 4 * v12));
        if ( ((unsigned int)&dword_60C82EAC & ~(1611312560 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C82EAC) )
        {
          dword_60C82EA8 = (int)&off_60BC00C8;
          _cxa_guard_release(&dword_60C82EAC);
        }
        if ( v14 )
        {
          if ( (**(int (__fastcall ***)(int, int *))v14)(v14, &dword_60C82EA8) == 1 )
          {
            (*(void (__fastcall **)(int, void *))(*(_DWORD *)v14 + 192))(v14, &unk_60C83094);
            *(_DWORD *)(v13 + 4 * v12) = 0;
          }
        }
        ++v12;
      }
      while ( v12 != 32 );
      v17 = FIELD_S16(a1, 6640);
      v16 = (__int16 *)(a1 + 6640);
      sub_608134CC(v16 - 154, "SE_VOC_KMC_BLOCK_FALL", v17, 0);
      sub_608134CC(v16 - 154, "SE_BOSS_KAMECK_MAGIC_SHOT", *v16, 0);
      *v20 = 2;
      return 2;
    }
  }
  return result;
}
