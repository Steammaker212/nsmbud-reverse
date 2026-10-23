/* SE_SYS_ref
 * address: 0x60729D40   size: 820   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_SYS_ref(_BYTE *a1)
{
  _BYTE *v1; // r6
  _BYTE *v2; // r7
  int v3; // r10
  signed int result; // r0
  bool v5; // zf
  const char *v6; // r1
  int v7; // r1
  bool v8; // cc
  char v9; // r2
  int v10; // r1
  __int64 v11; // r2
  int v12; // r11
  int v13; // r1
  __int64 v14; // r2
  unsigned int v15; // r0
  int v16; // r0

  v1 = a1 + 32;
  v2 = a1 + 16;
  v3 = 0;
  result = (signed int)&dword_60CC6B68;
  do
  {
    v12 = *((_DWORD *)v1 - 2);
    if ( !v12 )
      goto LABEL_43;
    *((_DWORD *)v1 - 2) = v12 - 1;
    if ( FIELD_U8(EnemyCounterMaybe_instance, 20) )
    {
      sub_60816F60(dword_60CC6B68, 8);
      v13 = v3 - 32;
      v14 = *(_QWORD *)v2;
      v15 = 1u >> (32 - v3);
      if ( v3 - 32 >= 0 )
        v15 = 1 << v13;
      HIDWORD(v14) &= ~v15;
      v16 = 1 << v3;
      if ( v13 >= 0 )
        v16 = 0;
      LODWORD(v14) = v14 & ~v16;
      *(_QWORD *)v2 = v14;
      *((_DWORD *)v1 - 2) = 0;
      *v1 = 0;
      *((_DWORD *)v1 - 1) = 0;
      result = (signed int)a1;
      a1[2328] = -1;
      goto LABEL_43;
    }
    if ( FIELD_U32(dword_60C99DD4, 764) == 1 && !sub_60777E74(dword_60CBFA90) )
    {
      if ( !sub_603FBA24(dword_60C99DD4) )
      {
LABEL_15:
        result = (unsigned __int8)a1[2360];
        if ( !a1[2360] )
        {
          sub_60816F60(dword_60CC6B68, 8);
          a1[2360] = 1;
          result = 0;
          *((_DWORD *)v1 - 1) = 0;
        }
        goto LABEL_43;
      }
    }
    else if ( !sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) )
    {
      goto LABEL_15;
    }
    if ( v12 == 1 )
    {
      a1[2328] = -1;
      v7 = v3 - 32;
      if ( *((_DWORD *)v1 - 1) == 2 )
        *((_DWORD *)v1 - 1) = 3;
      v8 = v7 < 0;
      v9 = *v1;
      *v1 &= ~0x10u;
      result = 1u >> (32 - v3);
      if ( v7 >= 0 )
        result = 1 << v7;
      v10 = 1 << v3;
      if ( !v8 )
        v10 = 0;
      if ( (v9 & 1) != 0 )
      {
        HIDWORD(v11) = *((_DWORD *)v2 + 1) | result;
        LODWORD(v11) = *(_DWORD *)v2 | v10;
      }
      else
      {
        HIDWORD(v11) = *((_DWORD *)v2 + 1) & ~result;
        result = ~v10;
        LODWORD(v11) = *(_DWORD *)v2 & ~v10;
      }
      *(_QWORD *)v2 = v11;
    }
    else
    {
      result = (unsigned __int8)*v1;
      if ( (result & 2) == 0 )
        goto LABEL_43;
      if ( (result & 4) != 0 )
      {
        switch ( v12 )
        {
          case 193:
            v6 = "SE_SYS_GREEN_COIN_TIMER1";
            break;
          case 129:
            v6 = "SE_SYS_GREEN_COIN_TIMER2";
            break;
          case 65:
            v6 = "SE_SYS_GREEN_COIN_TIMER3";
            break;
          default:
            goto LABEL_43;
        }
      }
      else
      {
        v5 = v12 == 65;
        if ( v12 != 65 )
          v5 = v12 == 193;
        if ( v5 || v12 == 129 )
        {
          v6 = "SE_SYS_SWITCH_CT_LAST";
        }
        else
        {
          if ( (((_BYTE)v12 - 1) & 0x3F) != 0 )
            goto LABEL_43;
          v6 = "SE_SYS_SWITCH_CT";
        }
      }
      result = sub_60807EF0(SoundSystem_instance, v6, 0, 1);
    }
LABEL_43:
    ++v3;
    v1 += 12;
  }
  while ( v3 != 64 );
  return result;
}
