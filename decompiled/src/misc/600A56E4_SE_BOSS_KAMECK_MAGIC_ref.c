/* SE_BOSS_KAMECK_MAGIC_ref
 * address: 0x600A56E4   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_KAMECK_MAGIC_ref(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r6
  int v5; // r4
  char v6; // r12
  int result; // r0
  int v8; // r5
  _DWORD *v9; // [sp+0h] [bp-38h]
  _WORD *v10; // [sp+4h] [bp-34h]

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionMgr_process((_BYTE *)(a1 + 648));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1);
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1108))(a1);
  sub_600B33DC(a1, v2);
  v10 = (_WORD *)(a1 + 6276);
  if ( FIELD_U16(a1, 6276) >= 0x2Du )
    sub_6081356C(a1 + 6332, "SE_BOSS_KAMECK_MAGIC", FIELD_S16(a1, 6640), 0);
  v9 = (_DWORD *)a1;
  v3 = 0;
  v4 = a1 + 8120;
  while ( 1 )
  {
    v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *(_DWORD *)(v4 + 4 * v3));
    if ( ((unsigned int)&dword_60C82EAC & ~(1611290608 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C82EAC) )
    {
      dword_60C82EA8 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C82EAC);
    }
    if ( v5 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C82EA8) == 1 )
      {
        result = FIELD_U8(v5, 6108);
        if ( !FIELD_U8(v5, 6108) )
          break;
      }
    }
    if ( ++v3 >= 32 )
    {
      result = (unsigned __int16)*v10;
      if ( !*v10 )
      {
        v8 = 3;
        if ( !(*(int (__fastcall **)(_DWORD *))(*v9 + 716))(v9) )
        {
          v8 = 2;
          if ( (*(int (__fastcall **)(_DWORD *))(*v9 + 720))(v9) )
            v8 = 3;
        }
        v9[2163] = ((3 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + v8;
        return (*(int (__fastcall **)(_DWORD *, int *))(*v9 + 192))(v9, &dword_60C82B48);
      }
      return result;
    }
  }
  return result;
}
