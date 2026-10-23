/* sub_60517830
 * address: 0x60517830   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60517830(int a1)
{
  int v2; // r6
  int result; // r0
  int v4; // r9
  int v5; // r5
  int j; // r2
  int v7; // r6
  int v8; // r5
  int i; // r2
  _BYTE *v10; // r4
  _BYTE *v11; // r8
  int v12; // t1
  int v13; // t1
  const char *v14; // r1
  int v15; // t1

  v2 = a1 + 40;
  result = sub_6047482C(a1 + 40, 0);
  v4 = result;
  if ( !result )
    return result;
  v5 = FIELD_U32(result, 56);
  (*(void (__fastcall **)(int *))(dword_60CA8888 + 12))(&dword_60CA8888);
  (*(void (__fastcall **)(int *))(dword_60CA8888 + 12))(&dword_60CA8888);
  result = dword_60CA888C;
  if ( dword_60CA888C == v5 )
  {
LABEL_10:
    result = sub_6047482C(v2, 3u);
    v7 = result;
    if ( !result )
      return result;
    v8 = FIELD_U32(result, 56);
    (*(void (__fastcall **)(int *))(dword_60CA8890 + 12))(&dword_60CA8890);
    (*(void (__fastcall **)(int *))(dword_60CA8890 + 12))(&dword_60CA8890);
    result = dword_60CA8894;
    if ( dword_60CA8894 != v8 )
    {
      for ( i = 1; *(unsigned __int8 *)(dword_60CA8894 + i - 1) == *(unsigned __int8 *)(v8 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(dword_60CA8894 + i - 1) )
          goto LABEL_19;
        if ( i >= 524289 || *(unsigned __int8 *)(dword_60CA8894 + i) != *(unsigned __int8 *)(v8 + i) )
          break;
        if ( !*(_BYTE *)(dword_60CA8894 + i) )
          goto LABEL_19;
      }
      return result;
    }
LABEL_19:
    result = (int)FIELD_F32(v7, 16);
    switch ( result )
    {
      case 3:
        v10 = (_BYTE *)(a1 + 21685);
        result = FIELD_U8(a1, 21685);
        if ( FIELD_U8(a1, 21685) )
          return result;
        v13 = FIELD_U8(a1, 21684);
        v11 = (_BYTE *)(a1 + 21684);
        result = v13;
        if ( !v13 )
          goto LABEL_36;
        if ( FIELD_F32(v4, 16) <= 112.0 )
          return result;
        v14 = "SE_VOC_LU_HELP_START";
        break;
      case 2:
        v10 = (_BYTE *)(a1 + 21685);
        result = FIELD_U8(a1, 21685);
        if ( FIELD_U8(a1, 21685) )
          return result;
        v15 = FIELD_U8(a1, 21684);
        v11 = (_BYTE *)(a1 + 21684);
        result = v15;
        if ( !v15 )
          goto LABEL_36;
        if ( FIELD_F32(v4, 16) <= 112.0 )
          return result;
        v14 = "SE_VOC_MA_HELP_START";
        break;
      case 1:
        v10 = (_BYTE *)(a1 + 21685);
        result = FIELD_U8(a1, 21685);
        if ( FIELD_U8(a1, 21685) )
          return result;
        result = FIELD_U32(a1, 21680);
        if ( !result )
          return result;
        v12 = FIELD_U8(a1, 21684);
        v11 = (_BYTE *)(a1 + 21684);
        if ( v12 )
        {
          result = (int)(float)(FIELD_F32(result, 48) * 100.0);
          if ( result >= 1 )
          {
            sub_60478680((int)"SE_SYS_SHA_ICON_APPEAR", 9);
            *v10 = 1;
            return 1;
          }
          return result;
        }
LABEL_36:
        *v10 = 0;
        *v11 = 1;
        return 1;
      default:
        return result;
    }
    result = sub_60807EF0(SoundSystem_instance, v14, 0, 1);
    *v10 = 1;
    return result;
  }
  for ( j = 1; *(unsigned __int8 *)(dword_60CA888C + j - 1) == *(unsigned __int8 *)(v5 + j - 1); j += 2 )
  {
    if ( !*(_BYTE *)(dword_60CA888C + j - 1) )
      goto LABEL_10;
    if ( j >= 524289 || *(unsigned __int8 *)(dword_60CA888C + j) != *(unsigned __int8 *)(v5 + j) )
      break;
    if ( !*(_BYTE *)(dword_60CA888C + j) )
      goto LABEL_10;
  }
  return result;
}
