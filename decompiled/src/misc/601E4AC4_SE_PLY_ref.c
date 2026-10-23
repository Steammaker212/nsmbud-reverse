/* SE_PLY_ref
 * address: 0x601E4AC4   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char *__fastcall SE_PLY_ref(int a1, int a2, unsigned int a3, int a4)
{
  const char *result; // r0
  const char *v9; // r4
  unsigned int v10; // r5
  _DWORD *v11; // r5
  int v12; // t1
  const char *v13; // r1

  result = sub_601E3508(a1, a2);
  v9 = result;
  if ( result )
  {
    if ( a3 >= 8 )
      a3 = 0;
    v10 = a1 + 4 * a3;
    v12 = FIELD_U32(v10, 16);
    v11 = (_DWORD *)(v10 + 16);
    FIELD_U32(v12, 312) = sub_600243A0(a4);
    if ( (unsigned int)(a2 - 1) >= 0xD )
    {
      result = (const char *)(a2 - 16);
      if ( (unsigned int)(a2 - 16) < 0xD )
        JUMPOUT(0x608147E8);
    }
    else
    {
      if ( a2 == 1 )
      {
        if ( a4 == 3 )
        {
          v9 = "SE_PLY_CS_JUMP_SS";
        }
        else if ( !a4 )
        {
          v9 = "SE_PLY_CS_JUMP_S";
        }
      }
      else
      {
        v13 = v9;
        if ( a4 == 5 )
          v13 = "SE_PLY_CS_LAND_PNGN";
        if ( a2 == 8 )
          v9 = v13;
      }
      return (const char *)(*(int (__fastcall **)(_DWORD, const char *, _DWORD))(*(_DWORD *)*v11 + 36))(*v11, v9, 0);
    }
  }
  return result;
}
