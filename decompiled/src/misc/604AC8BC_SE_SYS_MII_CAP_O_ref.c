/* SE_SYS_MII_CAP_O_ref
 * address: 0x604AC8BC   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_MII_CAP_O_ref(int a1)
{
  int v2; // r6
  _BYTE *v3; // r5
  int result; // r0
  int v5; // r7
  unsigned int v6; // r9
  int v7; // r1
  const char *v8; // r0

  v2 = 61;
  v3 = (_BYTE *)(a1 + 97945);
  do
  {
    result = (unsigned __int8)*v3;
    if ( *v3 )
    {
      result = (int)(v3 - 2672);
      if ( *(_DWORD *)(v3 - 2313) == 8 )
      {
        v5 = *(_DWORD *)(v3 - 2673);
        if ( v5 )
        {
          v6 = *(_DWORD *)(v3 - 149);
          if ( v6 >= 5 )
            v6 = 0;
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
          v7 = *(_DWORD *)(a1 + 404 * v6 + 277676);
          if ( result == 1 )
          {
            if ( (v7 & 0x20) == 0 )
              goto LABEL_13;
            (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v5 + 4))(v5, 0);
            v8 = "SE_SYS_MII_CAP_OFF";
          }
          else
          {
            if ( (v7 & 0x10) == 0 )
              goto LABEL_13;
            (*(void (__fastcall **)(int, int))(*(_DWORD *)v5 + 4))(v5, 1);
            v8 = "SE_SYS_MII_CAP_ON";
          }
          result = sub_60478680((int)v8, 15);
        }
      }
    }
LABEL_13:
    v3 += 2988;
    --v2;
  }
  while ( v2 );
  return result;
}
