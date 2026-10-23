/* sub_6078A55C
 * address: 0x6078A55C   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078A55C(int a1, int a2)
{
  int v3; // r6
  int v4; // r5
  int v5; // r0

  v3 = 0;
  while ( 1 )
  {
    if ( a2 != v3 && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << v3)) != 0 )
    {
      v4 = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 32);
      if ( v4 )
      {
        if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 636))(*(_DWORD *)(PlayerMgr_instance + 4 * v3 + 32)) != 1
          || !(*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 640))(v4, 3)
          && !(*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 640))(v4, 5) )
        {
          v5 = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 32);
          if ( v5 )
          {
            if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 640))(v5, 3) != 1 )
              break;
          }
        }
      }
    }
    if ( ++v3 >= 4 )
      return 1;
  }
  return 0;
}
