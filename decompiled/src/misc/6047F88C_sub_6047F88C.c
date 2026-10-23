/* sub_6047F88C
 * address: 0x6047F88C   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6047F88C(int a1)
{
  char v1; // r12
  int v2; // r1
  int v3; // r6
  int *v4; // r5
  int v5; // r7
  int v6; // r4
  int v7; // r0

  if ( !FIELD_U32(PlayerMgr_instance, 32) )
  {
    v2 = 0;
    goto LABEL_9;
  }
  if ( !FIELD_U32(PlayerMgr_instance, 36) )
  {
    v2 = 1;
    goto LABEL_9;
  }
  if ( !FIELD_U32(PlayerMgr_instance, 40) )
  {
    v2 = 2;
    goto LABEL_9;
  }
  if ( !FIELD_U32(PlayerMgr_instance, 44) )
  {
    v2 = 3;
LABEL_9:
    FIELD_U32(a1, 52) = v2;
  }
  v3 = dword_60CCF448;
  if ( !FIELD_U32(dword_60CCF448, 212) )
    goto LABEL_23;
  v4 = *(int **)(dword_60CCF448 + 220);
  v5 = FIELD_U32(a1, 52);
  while ( 1 )
  {
    v6 = *v4;
    if ( ((unsigned int)&dword_60C9CF14 & ~(1615329632 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CF14) )
    {
      dword_60C9CF10 = (int)&off_60BD84A8;
      _cxa_guard_release(&dword_60C9CF14);
    }
    v7 = (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C9CF10);
    if ( !v6 || v7 != 1 )
      goto LABEL_19;
    if ( !v5 )
      break;
    --v5;
LABEL_19:
    if ( ++v4 == (int *)(FIELD_U32(v3, 220) + 4 * FIELD_U32(v3, 212)) )
      goto LABEL_23;
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6) == 1 )
    FIELD_U8(a1, 96) = 1;
LABEL_23:
  FIELD_U32(a1, 92) = 180;
  return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60C9EC58);
}
