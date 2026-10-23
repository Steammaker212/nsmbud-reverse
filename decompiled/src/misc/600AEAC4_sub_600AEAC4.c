/* sub_600AEAC4
 * address: 0x600AEAC4   size: 980   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600AEAC4(int a1)
{
  _DWORD *v2; // r6
  _BYTE *v3; // r4
  char v4; // r12
  char v5; // r12
  int v6; // r0

  v2 = (_DWORD *)(a1 + 7088);
  v3 = (_BYTE *)ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 7088));
  if ( ((unsigned int)&dword_60C7B364 & ~(1611328260 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v3 && (**(int (__fastcall ***)(_BYTE *, int *))v3)(v3, &StageActor_RTTI) == 1 )
  {
    v3[534] = 1;
    switch ( FIELD_U32(a1, 7084) )
    {
      case 1:
        if ( ((unsigned int)&dword_60C830D8 & ~(1611328544 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C830D8) )
        {
          dword_60C830D4 = (int)&off_60BC9028;
          _cxa_guard_release(&dword_60C830D8);
        }
        if ( (**(int (__fastcall ***)(_BYTE *, int *))v3)(v3, &dword_60C830D4) == 1 )
          (*(void (__fastcall **)(_BYTE *, int *))(*(_DWORD *)v3 + 192))(v3, &dword_60C942DC);
        break;
      case 2:
      case 3:
        if ( ((unsigned int)&dword_60C830F0 & ~(1611328448 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C830F0) )
        {
          dword_60C830EC = (int)&off_60BC9034;
          _cxa_guard_release(&dword_60C830F0);
        }
        v6 = (**(int (__fastcall ***)(_BYTE *, int *))v3)(v3, &dword_60C830EC);
        goto LABEL_30;
      case 4:
        if ( ((unsigned int)&dword_60C803F0 & ~(1611328672 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C803F0) )
        {
          dword_60C803EC = (int)&off_60BC321C;
          _cxa_guard_release(&dword_60C803F0);
        }
        if ( (**(int (__fastcall ***)(_BYTE *, int *))v3)(v3, &dword_60C803EC) == 1 )
          sub_60260BAC(v3);
        break;
      case 5:
        if ( ((unsigned int)dword_60C83108 & ~(1611328792 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C83108) )
        {
          dword_60C83104 = (int)&off_60BC04AC;
          _cxa_guard_release(dword_60C83108);
        }
        if ( (**(int (__fastcall ***)(_BYTE *, int *))v3)(v3, &dword_60C83104) == 1 )
          (*(void (__fastcall **)(_BYTE *, int *))(*(_DWORD *)v3 + 192))(v3, &dword_60C8EE78);
        break;
      case 6:
        if ( ((unsigned int)&dword_60C83100 & ~(1611328920 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C83100) )
        {
          dword_60C830FC = (int)&off_60BC9040;
          _cxa_guard_release(&dword_60C83100);
        }
        v6 = (**(int (__fastcall ***)(_BYTE *, int *))v3)(v3, &dword_60C830FC);
LABEL_30:
        if ( v6 == 1 )
          (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v3 + 856))(v3);
        break;
      case 7:
        if ( ((unsigned int)&dword_60C830E8 & ~(1611329048 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C830E8) )
        {
          dword_60C830E4 = (int)&off_60BC04AC;
          _cxa_guard_release(&dword_60C830E8);
        }
        if ( (**(int (__fastcall ***)(_BYTE *, int *))v3)(v3, &dword_60C830E4) == 1 )
          (*(void (__fastcall **)(_BYTE *, int *))(*(_DWORD *)v3 + 192))(v3, &dword_60C8DEF4);
        break;
      default:
        break;
    }
  }
  *v2 = 0;
  return 0;
}
