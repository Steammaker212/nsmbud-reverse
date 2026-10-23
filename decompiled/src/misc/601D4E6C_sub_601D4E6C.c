/* sub_601D4E6C
 * address: 0x601D4E6C   size: 1132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D4E6C(int a1)
{
  int *v2; // r9
  int v3; // r8
  _DWORD *v4; // r6
  char *v5; // r0
  int i; // r1
  char *v7; // r0
  int j; // r1
  int v9; // r6
  char v10; // r12
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r1
  int v15; // r1
  int result; // r0
  _DWORD v17[11]; // [sp+4h] [bp-2Ch] BYREF

  v2 = (int *)(a1 + 1032);
  v3 = 0;
  if ( sub_601D9F8C(a1 + 1032) == 1 && !FIELD_U8(dword_60CC6D78, 505) )
  {
    sub_601D0D88(a1);
    v3 = 1;
  }
  if ( sub_601FA2CC(dword_60C8BF58, *v2) != 1 )
    goto LABEL_19;
  v4 = (_DWORD *)sub_601E0010(v2);
  (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
  (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
  v5 = (char *)v4[1];
  if ( v5 == "W5A0" )
  {
LABEL_16:
    sub_6080A1A0(SoundSystem_instance, 60);
    sub_601D9B54(a1);
    sub_601D1E48(a1);
LABEL_18:
    v3 = 1;
    goto LABEL_19;
  }
  for ( i = 0; i < 524289; ++i )
  {
    if ( v5[i] != aW5a0[i] )
      break;
    if ( !v5[i] )
      goto LABEL_16;
  }
  (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
  (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
  v7 = (char *)v4[1];
  if ( v7 == "W7A0" )
  {
LABEL_17:
    sub_6080A1A0(SoundSystem_instance, 60);
    sub_601D9B54(a1);
    sub_601D22F8(a1);
    goto LABEL_18;
  }
  for ( j = 0; j < 524289; ++j )
  {
    if ( v7[j] != aW7a0[j] )
      break;
    if ( !v7[j] )
      goto LABEL_17;
  }
LABEL_19:
  if ( (*v2 | 8) != 8 && !sub_6019B238(*v2) )
  {
    v12 = sub_601E0010(v2);
    v13 = sub_6040D864(v12);
    if ( *v2 == 7 )
    {
      if ( v13 == 37 )
      {
        sub_601D0F08();
LABEL_33:
        v3 = 1;
      }
    }
    else if ( v13 == 37 )
    {
      sub_601D0DC0(a1, *v2);
      goto LABEL_33;
    }
  }
  v9 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 1172));
  if ( ((unsigned int)&dword_60C88AA8 & ~(1612533840 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA8) )
  {
    dword_60C88AA4 = (int)&off_60BD4BA4;
    _cxa_guard_release(&dword_60C88AA8);
  }
  if ( v9 && (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C88AA4) == 1 )
  {
    switch ( *v2 )
    {
      case 0:
        goto LABEL_40;
      case 1:
        v11 = sub_601D9FC4(v2);
        goto LABEL_39;
      case 3:
        if ( !sub_601C6AA0(a1) && sub_601B1354() && sub_601DA01C(v2) )
          break;
        goto LABEL_40;
      case 6:
        v11 = sub_601DA484(v2);
LABEL_39:
        if ( v11 )
        {
LABEL_40:
          v3 = 1;
          sub_601B5110((_DWORD *)a1, 2, 1, 0);
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 108))(v9);
        }
        break;
      default:
        break;
    }
  }
  if ( sub_601D1204(a1) == 1
    && sub_60220244(dword_60C8D4EC) >= 1
    && (FIELD_U8(a1, 1120) & 0x80) == 0
    && sub_601D1248(a1, (int)v2, (_DWORD *)(a1 + 1020)) )
  {
    v3 = 1;
    sub_601D12C0(a1, 1);
  }
  if ( sub_601DA2B8(v2, v14) == 1 )
  {
    v17[0] = FIELD_U32(dword_60CC6D78, 480);
    v17[1] = FIELD_U32(dword_60CC6D78, 484);
    v17[2] = FIELD_U32(dword_60CC6D78, 488);
    if ( sub_601DA4F4(v17) == 1 )
    {
      sub_6022D114(dword_60C8D864);
      sub_6021FA6C(dword_60C8D4EC);
      sub_601D1A24();
      v3 = 1;
    }
  }
  if ( sub_601DA4F4(a1 + 1080) == 1 && sub_601DA4BC(v2, v15) == 1 )
  {
    sub_601D0B7C(a1);
  }
  else
  {
    result = 0;
    if ( v3 != 1 )
      return result;
  }
  sub_601B3F54(a1);
  return 1;
}
