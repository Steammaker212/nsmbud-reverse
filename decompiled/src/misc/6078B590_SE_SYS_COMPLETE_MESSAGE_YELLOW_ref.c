/* SE_SYS_COMPLETE_MESSAGE_YELLOW_ref
 * address: 0x6078B590   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_COMPLETE_MESSAGE_YELLOW_ref(_DWORD *a1, int a2)
{
  _DWORD *v3; // r8
  int v4; // r5
  int i; // r4
  int v6; // r2
  int result; // r0
  bool v8; // zf

  a1[52] = a2;
  if ( sub_6078A030(a1) )
    sub_60807EF0(SoundSystem_instance, "SE_SYS_COMPLETE_MESSAGE_YELLOW", 0, 1);
  v3 = a1 + 8;
  v4 = 0;
  for ( i = 0; i != 4; ++i )
  {
    v6 = dword_60C99DD4 + 272;
    if ( !dword_60C99DD4 )
      v6 = dword_60C99DEC + 16;
    result = v6 + v4;
    if ( *(_BYTE *)(v6 + v4 + 20) )
    {
      result = FIELD_U32(result, 24);
      if ( result >= 1 )
      {
        if ( (FIELD_U8(dword_60C9CF0C, 1404) & (1 << i)) != 0 )
          goto LABEL_13;
        result = v3[i];
        v8 = result == 0;
        if ( result )
        {
          result = FIELD_U8(result, 1219);
          v8 = (result & 8) == 0;
        }
        if ( v8 )
        {
LABEL_13:
          result = *(_DWORD *)(PlayerMgr_instance + 4 * i + 32);
          if ( result )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 1460))(result);
        }
      }
    }
    v4 += 72;
  }
  return result;
}
