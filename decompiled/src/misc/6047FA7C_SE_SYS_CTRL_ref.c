/* SE_SYS_CTRL_ref
 * address: 0x6047FA7C   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CTRL_ref(int a1)
{
  char v1; // r12
  int result; // r0
  const char *v4; // r1
  int v5; // r5
  int *v6; // r7
  int v7; // r11
  int v8; // r6
  int v9; // r0

  if ( !FIELD_U8(a1, 90) )
  {
    FIELD_U8(a1, 89) = 1;
    FIELD_U8(a1, 90) = 1;
  }
  if ( FIELD_U8(a1, 99) )
  {
    FIELD_U8(a1, 98) = 1;
    FIELD_U8(a1, 97) = 0;
    return (int)StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60C9EC78);
  }
  if ( FIELD_U8(a1, 97) )
  {
    FIELD_U8(a1, 97) = 0;
    return (int)StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60C9EC78);
  }
  if ( FIELD_U8(a1, 96) )
  {
    result = FIELD_U32(a1, 92);
    if ( result == 180 )
    {
      switch ( FIELD_U32(a1, 52) )
      {
        case 0:
          v4 = "SE_SYS_CTRL_0_CONNECTED_TV";
          goto LABEL_29;
        case 1:
          v4 = "SE_SYS_CTRL_1_CONNECTED_TV";
          goto LABEL_29;
        case 2:
          v4 = "SE_SYS_CTRL_2_CONNECTED_TV";
          goto LABEL_29;
        case 3:
          v4 = "SE_SYS_CTRL_3_CONNECTED_TV";
LABEL_29:
          sub_60807EF0(SoundSystem_instance, v4, 0, 1);
          break;
        default:
          break;
      }
      result = FIELD_U32(a1, 92);
    }
    FIELD_U32(a1, 92) = result - 1;
    if ( result > 0 )
      return result;
    result = FIELD_U8(dword_60C9CF0C, 1392);
    if ( FIELD_U8(dword_60C9CF0C, 1392) )
      return result;
    return (int)StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60C9EC78);
  }
  v5 = dword_60CCF448;
  result = FIELD_U32(dword_60CCF448, 212);
  if ( !result )
    return result;
  v6 = *(int **)(dword_60CCF448 + 220);
  v7 = FIELD_U32(a1, 52);
  while ( 1 )
  {
    v8 = *v6;
    if ( ((unsigned int)&dword_60C9CF14 & ~(1615330228 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CF14) )
    {
      dword_60C9CF10 = (int)&off_60BD84A8;
      _cxa_guard_release(&dword_60C9CF14);
    }
    v9 = (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C9CF10);
    if ( !v8 || v9 != 1 )
      goto LABEL_21;
    if ( !v7 )
      break;
    --v7;
LABEL_21:
    ++v6;
    result = FIELD_U32(v5, 220) + 4 * FIELD_U32(v5, 212);
    if ( v6 == (int *)result )
      return result;
  }
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 20))(v8);
  if ( result == 1 )
  {
    result = 1;
    FIELD_U8(a1, 96) = 1;
  }
  return result;
}
