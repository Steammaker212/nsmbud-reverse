/* sub_604A372C
 * address: 0x604A372C   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A372C(int a1)
{
  float v2; // s0
  float v3; // s0
  StateBase *v4; // r1
  _DWORD *v5; // r4
  int result; // r0
  unsigned int v7; // r1
  _BYTE *v8; // r0
  int (**v9)(); // [sp+8h] [bp-18h] BYREF
  int v10; // [sp+Ch] [bp-14h]

  if ( !FIELD_U8(a1, 20501)
    || (v2 = FIELD_F32(a1, 20504), FIELD_F32(a1, 20512) > v2)
    || v2 > FIELD_F32(a1, 20520)
    || (v3 = FIELD_F32(a1, 20508), FIELD_F32(a1, 20516) > v3)
    || v3 > FIELD_F32(a1, 20524) )
  {
    FIELD_U8(a1, 40) = 1;
    v4 = &stru_60CA1110;
LABEL_7:
    StateMgr__changeState((StateMgr *)(a1 + 24), v4);
    goto LABEL_8;
  }
  result = FIELD_U8(a1, 20500);
  if ( FIELD_U8(a1, 20500) )
    return result;
  v7 = FIELD_U32(a1, 20496);
  if ( v7 == 6 )
  {
    sub_60807EF0(SoundSystem_instance, "SE_SYS_DECIDE", 0, 1);
    FIELD_U8(a1, 40) = 1;
    v4 = (StateBase *)&unk_60CA11D0;
    goto LABEL_7;
  }
  v8 = *(_BYTE **)(a1 + 20488);
  if ( v8 )
  {
    if ( (v7 | 1) == 3 )
    {
      if ( v8[2] )
      {
LABEL_21:
        sub_60807EF0(SoundSystem_instance, "SE_SYS_INVALID", 0, 1);
        FIELD_U8(a1, 40) = 1;
        v4 = (StateBase *)&unk_60CA1170;
        goto LABEL_7;
      }
      v7 = 3;
    }
    if ( v7 < 7 )
      v8 += v7;
    if ( *v8 )
      goto LABEL_21;
  }
  sub_60807EF0(SoundSystem_instance, "SE_SYS_DECIDE", 0, 1);
  FIELD_U8(a1, 40) = 1;
  StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA1150);
  v9 = &sead__SafeStringBase__vtable;
  v10 = dword_60CA12CC;
  sub_6047467C((_DWORD *)(a1 + 48), 0x11u, &v9, (int)&dword_60CA13B8, 1.0, 0);
LABEL_8:
  v5 = (_DWORD *)(a1 + 48);
  v9 = &sead__SafeStringBase__vtable;
  v10 = dword_60CA12C4;
  result = sub_6047467C(v5, 0x11u, &v9, (int)&dword_60CA13B8, -1.0, 0);
  if ( result == 1 )
    return sub_6047482C((int)v5, 0x11u);
  return result;
}
