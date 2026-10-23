/* SE_SYS_SWITCH_CT_ref
 * address: 0x6072A0B8   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_SWITCH_CT_ref(int a1)
{
  int v2; // r9
  _DWORD *v3; // r7
  int result; // r0
  int v5; // r11
  unsigned int v6; // r10
  const char *v7; // r1

  v2 = 0;
  v3 = (_DWORD *)(a1 + 2336);
  do
  {
    result = FIELD_U32(a1, 2332);
    if ( (result & (1 << v2)) == 0 )
      goto LABEL_24;
    v5 = 1 << v2;
    if ( FIELD_U8(EnemyCounterMaybe_instance, 20) )
    {
      sub_60816F60(dword_60CC6B68, 8);
      result = FIELD_U32(a1, 2332) & ~v5;
      FIELD_U32(a1, 2332) = result;
      v3[3] = 0;
      *v3 = 0;
      goto LABEL_24;
    }
    if ( FIELD_U32(dword_60C99DD4, 764) == 1 && !sub_60777E74(dword_60CBFA90) )
    {
      if ( !sub_603FBA24(dword_60C99DD4) )
        goto LABEL_15;
LABEL_10:
      v6 = v3[3];
      if ( v6 )
        --v6;
      result = v6 % 0x3C;
      if ( v6 == 60 * (v6 / 0x3C) )
      {
        if ( v6 < 0xB5 )
        {
          if ( !v6 )
          {
LABEL_22:
            *v3 = 3;
            FIELD_U32(a1, 2332) &= ~v5;
            result = sub_60409700((unsigned __int8 *)dword_60C9A1F0);
            goto LABEL_23;
          }
          v7 = "SE_SYS_SWITCH_CT_LAST";
        }
        else
        {
          v7 = "SE_SYS_SWITCH_CT";
        }
        result = sub_60807EF0(SoundSystem_instance, v7, 0, 1);
      }
      else if ( !v6 )
      {
        goto LABEL_22;
      }
LABEL_23:
      v3[3] = v6;
      goto LABEL_24;
    }
    if ( sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) )
      goto LABEL_10;
LABEL_15:
    result = FIELD_U8(a1, 2360);
    if ( !FIELD_U8(a1, 2360) )
    {
      result = sub_60816F60(dword_60CC6B68, 8);
      FIELD_U8(a1, 2360) = 1;
      *v3 = 0;
    }
LABEL_24:
    ++v2;
    ++v3;
  }
  while ( v2 != 3 );
  return result;
}
