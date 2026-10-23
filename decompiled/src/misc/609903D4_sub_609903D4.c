/* sub_609903D4
 * address: 0x609903D4   size: 1184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609903D4(int *a1, unsigned __int8 *a2, int a3)
{
  int result; // r0
  int v5; // r6
  bool v6; // cc
  int v7; // r8
  int v8; // r0
  int v9; // r5
  int *v10; // r11
  int v11; // r10
  unsigned __int8 *v12; // r6
  int v13; // r0
  int i; // r1
  int v15; // r8
  int v16; // r0
  int v17; // r6
  int *v18; // r9
  int v19; // r10
  unsigned __int8 *v20; // r5
  int v21; // r0
  int j; // r1
  int v23; // [sp+0h] [bp-98h]
  int v24; // [sp+8h] [bp-90h]
  int v26; // [sp+14h] [bp-84h]
  int (**v27)(); // [sp+18h] [bp-80h] BYREF
  const char *v28; // [sp+1Ch] [bp-7Ch]
  int (**v29)(); // [sp+20h] [bp-78h] BYREF
  int *v30; // [sp+24h] [bp-74h]
  int v31; // [sp+28h] [bp-70h]
  int v32; // [sp+2Ch] [bp-6Ch] BYREF
  int (**v33)(); // [sp+6Ch] [bp-2Ch] BYREF
  unsigned __int8 *v34; // [sp+70h] [bp-28h]

  *(_BYTE *)*a1 = 0;
  a1[1] = 0;
  result = *a2;
  if ( *a2 )
  {
    if ( result == 47 )
    {
      sub_608FDFB8((int)a1, a2 + 1, -1);
      return sub_608FE0E4((int)a1, 47, 45);
    }
    else
    {
      v33 = &sead__SafeStringBase__vtable;
      v34 = a2;
      v30 = &v32;
      v29 = &BufferedSafeStringBase_char_vtable_probably;
      v31 = 64;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v29);
      v5 = 0;
      *(_BYTE *)v30 = 0;
      v29 = &off_60BD4BF0;
      v26 = 0;
      v27 = &sead__SafeStringBase__vtable;
      v28 = "/";
      v33[3]();
      v24 = a3;
      while ( v34[v5] )
      {
        if ( !v34[v5 + 1] )
        {
          ++v5;
          break;
        }
        if ( !v34[v5 + 2] )
        {
          v5 += 2;
          break;
        }
        v6 = v5 + 2 <= 0x7FFFF;
        v5 += 3;
        if ( !v6 )
        {
          v5 = 0;
          break;
        }
      }
      v7 = 0;
      ((void (__fastcall *)(int (***)()))v33[3])(&v33);
      v23 = v5 + 1;
      v8 = 0;
      while ( v34[v8] )
      {
        if ( !v34[v8 + 1] )
        {
          ++v8;
          break;
        }
        if ( !v34[v8 + 2] )
        {
          v8 += 2;
          break;
        }
        v6 = v8 + 2 <= 0x7FFFF;
        v8 += 3;
        if ( !v6 )
        {
          v8 = 0;
          break;
        }
      }
      if ( v8 >= 0 )
      {
        ((void (__fastcall *)(int (***)()))v29[3])(&v29);
        v9 = v31;
        if ( v31 >= 1 )
        {
          v10 = v30;
          v11 = 0;
          while ( 1 )
          {
            v12 = v34;
            if ( !v34[v7] )
              break;
            ((void (__fastcall *)(int (***)()))v27[3])(&v27);
            v13 = v12[v7];
            for ( i = 1; v28[i - 1]; i += 2 )
            {
              if ( (unsigned __int8)v28[i - 1] == v13 )
                goto LABEL_34;
              if ( i >= 524289 || !v28[i] )
                break;
              if ( (unsigned __int8)v28[i] == v13 )
                goto LABEL_34;
            }
            *((_BYTE *)v10 + v11++) = v13;
            ++v7;
            if ( v9 <= v11 )
              goto LABEL_35;
          }
LABEL_34:
          *((_BYTE *)v10 + v11) = 0;
          v26 = v7 + 1;
        }
      }
LABEL_35:
      ((void (__fastcall *)(int (***)()))v29[3])(&v29);
      sub_609902D8(a1, v30, v24);
      v15 = v26;
      for ( result = v23; v26 != v23; result = v23 )
      {
        ((void (__fastcall *)(int (***)()))v33[3])(&v33);
        v16 = 0;
        while ( v34[v16] )
        {
          if ( !v34[v16 + 1] )
          {
            ++v16;
            if ( v15 < 0 )
              goto LABEL_62;
            goto LABEL_47;
          }
          if ( !v34[v16 + 2] )
          {
            v16 += 2;
            break;
          }
          v6 = v16 + 2 <= 0x7FFFF;
          v16 += 3;
          if ( !v6 )
          {
            v16 = 0;
            if ( v15 < 0 )
              goto LABEL_62;
            goto LABEL_47;
          }
        }
        if ( v15 < 0 )
          goto LABEL_62;
LABEL_47:
        if ( v15 <= v16 )
        {
          ((void (__fastcall *)(int (***)()))v29[3])(&v29);
          v17 = v31;
          if ( v31 >= 1 )
          {
            v18 = v30;
            v19 = 0;
            while ( 1 )
            {
              v20 = v34;
              if ( !v34[v15] )
                break;
              ((void (__fastcall *)(int (***)()))v27[3])(&v27);
              v21 = v20[v15];
              for ( j = 1; v28[j - 1]; j += 2 )
              {
                if ( (unsigned __int8)v28[j - 1] == v21 )
                  goto LABEL_61;
                if ( j >= 524289 || !v28[j] )
                  break;
                if ( (unsigned __int8)v28[j] == v21 )
                  goto LABEL_61;
              }
              *((_BYTE *)v18 + v19++) = v21;
              ++v15;
              if ( v17 <= v19 )
                goto LABEL_62;
            }
LABEL_61:
            *((_BYTE *)v18 + v19) = 0;
            v26 = v15 + 1;
          }
        }
LABEL_62:
        sub_608FE058(a1, "-", -1);
        ((void (__fastcall *)(int (***)()))v29[3])(&v29);
        sub_608FE058(a1, v30, -1);
        v15 = v26;
      }
    }
  }
  return result;
}
