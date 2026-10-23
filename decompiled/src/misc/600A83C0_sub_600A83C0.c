/* sub_600A83C0
 * address: 0x600A83C0   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600A83C0(int a1)
{
  int v1; // r8
  int v2; // r5
  int v3; // r0
  _BYTE *v4; // r7
  char v5; // r12
  Actor **v6; // r5
  Actor **i; // r8
  Actor *v8; // r7
  int v9; // r0
  bool v10; // zf

  v1 = 0;
  v2 = a1 + 8120;
  v3 = ActorMgr__instance;
  do
  {
    v4 = (_BYTE *)ActorMgrRelated_getById(v3 + 27168, *(_DWORD *)(v2 + 4 * v1));
    if ( ((unsigned int)&dword_60C82EAC & ~(1611301956 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C82EAC) )
    {
      dword_60C82EA8 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C82EAC);
    }
    if ( v4 && (**(int (__fastcall ***)(_BYTE *, int *))v4)(v4, &dword_60C82EA8) == 1 )
    {
      (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v4 + 104))(v4);
      sub_600AE874(v4);
      v4[19] = 1;
      *(_DWORD *)(v2 + 4 * v1) = 0;
    }
    v3 = ActorMgr__instance;
    ++v1;
  }
  while ( v1 != 32 );
  v6 = *(Actor ***)(ActorMgr__instance + 27180);
  for ( i = *(Actor ***)(ActorMgr__instance + 27172); v6 != i; ++i )
  {
    v8 = *i;
    if ( ((unsigned int)&dword_60C7B364 & ~(1611302412 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v8 )
    {
      v9 = (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v8, 0x0))(v8, &StageActor_RTTI);
      v10 = v9 == 1;
      if ( v9 == 1 )
        v10 = FIELD_U8(v8, 0x13) == 0;
      if ( v10 && Actor__getProfileId(v8) == 368 )
      {
        if ( ((unsigned int)&dword_60C82EAC & ~(1611302296 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C82EAC) )
        {
          dword_60C82EA8 = (int)&off_60BC00C8;
          _cxa_guard_release(&dword_60C82EAC);
        }
        if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v8, 0x0))(v8, &dword_60C82EA8) == 1 )
        {
          (*(void (__fastcall **)(Actor *))(FIELD_U32(v8, 0x0) + 104))(v8);
          sub_600AE874(v8);
          FIELD_U8(v8, 0x13) = 1;
        }
      }
    }
  }
}
