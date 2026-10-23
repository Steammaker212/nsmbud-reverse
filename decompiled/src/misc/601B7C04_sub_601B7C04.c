/* sub_601B7C04
 * address: 0x601B7C04   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601B7C04()
{
  _DWORD *v0; // r5
  int result; // r0
  bool v2; // zf
  int v3; // r9
  int v4; // r8
  int v5; // r5
  char *v6; // r0
  int i; // r2
  char *v8; // r0
  int j; // r2
  char *v10; // r1
  int k; // r7
  _DWORD v12[3]; // [sp+0h] [bp-38h] BYREF
  int v13; // [sp+Ch] [bp-2Ch] BYREF
  int v14; // [sp+10h] [bp-28h]
  int v15; // [sp+14h] [bp-24h]

  v0 = (_DWORD *)sub_601CF9C0(dword_60C8AEF0);
  v13 = -1;
  v14 = -1;
  v15 = -1;
  sub_6019EC34(&v13, v0 + 264);
  result = 0;
  if ( v13 != -1 )
  {
    v2 = v14 == -1;
    if ( v14 != -1 )
      v2 = v15 == -1;
    if ( !v2 )
    {
      memset(v12, 255, sizeof(v12));
      sub_6019EC34(v12, v0 + 258);
      v3 = sub_601DFFE4(v12);
      v4 = v0[273];
      v5 = v3 + 4;
      (*(void (__fastcall **)(int))(FIELD_U32(v3, 4) + 12))(v3 + 4);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
      v6 = *(char **)(v3 + 8);
      if ( v6 == "W403" )
      {
LABEL_11:
        result = 1;
        if ( (unsigned int)(v4 - 3) < 2 )
          return result;
      }
      else
      {
        for ( i = 0; i < 524289; ++i )
        {
          if ( v6[i] != aW403[i] )
            break;
          if ( !v6[i] )
            goto LABEL_11;
        }
      }
      (*(void (__fastcall **)(int))(FIELD_U32(v3, 4) + 12))(v5);
      (*(void (__fastcall **)(int))(FIELD_U32(v3, 4) + 12))(v5);
      v8 = *(char **)(v3 + 8);
      if ( v8 == "W405" )
      {
LABEL_18:
        result = 1;
        if ( v4 == 4 )
          return result;
      }
      else
      {
        for ( j = 0; j < 524289; ++j )
        {
          if ( v8[j] != aW405[j] )
            break;
          if ( !v8[j] )
            goto LABEL_18;
        }
      }
      (*(void (__fastcall **)(int))(FIELD_U32(v3, 4) + 12))(v5);
      (*(void (__fastcall **)(int))(FIELD_U32(v3, 4) + 12))(v5);
      v10 = *(char **)(v3 + 8);
      result = 1;
      if ( v10 != "W4G0" )
      {
        for ( k = 0; k < 524289; ++k )
        {
          if ( v10[k] != aW4g0[k] )
            break;
          if ( !v10[k] )
            return result;
        }
        return 0;
      }
    }
  }
  return result;
}
