/* shufflePanel_hahaha_ref
 * address: 0x607349B8   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall shufflePanel_hahaha_ref(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1
  int v4; // t1
  unsigned int *v5; // r4
  _DWORD *v6; // t1
  int v7; // r0
  int v8; // r5
  int ResArchiveById; // r0
  int a5; // [sp+0h] [bp-20h] BYREF
  const char *v11; // [sp+4h] [bp-1Ch]
  int v12; // [sp+8h] [bp-18h]
  int v13; // [sp+Ch] [bp-14h]

  v4 = FIELD_U8(a1, 6780);
  result = (StateMethodExecuter *)(a1 + 6780);
  v3 = v4;
  if ( v4 == 1 )
  {
    v6 = *(_DWORD **)(a1 + 6100);
    v5 = (unsigned int *)(a1 + 6100);
    v7 = (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)*v6 + 132))(*v6, 1);
    a5 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 1065353216;
    (*(void (__fastcall **)(int, _DWORD, int *))(*(_DWORD *)v7 + 20))(v7, 0, &a5);
    v8 = **(_DWORD **)(*v5 + 12);
    ResArchiveById = Profile__getResArchiveById((Profile *)*(v5 - 1522), v5[1497]);
    a5 = (int)&sead__SafeStringBase__vtable;
    v11 = "shufflePanel_hahaha";
    SkeletalAnim_play(v8, ResArchiveById, (const char **)&a5);
    sub_60815F50(dword_60CC6B68, 6);
    return StateMgr__changeState((StateMgr *)v5 - 1, (StateBase *)&dword_60CBDD60);
  }
  else if ( !v3 )
  {
    LOBYTE(FIELD_U32(result, 0x0)) = 1;
    return (StateMethodExecuter *)EffectData_create(263, (Vec3 *)(a1 + 108), 0, 0);
  }
  return result;
}
