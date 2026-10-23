/* sub_604E254C
 * address: 0x604E254C   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_604E254C(_DWORD *a1)
{
  unsigned int result; // r0
  int *v3; // r6
  unsigned int v4; // r1
  int v5; // r4
  int v6; // r0
  _DWORD *v7; // r4
  float v8; // s16
  int v9; // r7
  _DWORD *v10; // r5
  int v11; // r8
  int v12; // r1
  int i; // r3

  v3 = a1 + 1431;
  result = a1[1431];
  v4 = result;
  if ( result >= 4 )
    v4 = 0;
  if ( *(_DWORD *)(PlayerMgr_instance + 4 * v4 + 32) )
  {
    v5 = a1[v4 + 916];
    if ( v5 )
    {
      if ( result >= 5 )
        result = 0;
      result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a1[101 * result + 1001] + 20))(a1[101 * result + 1001]);
      if ( result == 1 )
      {
        result = sub_604593D0(dword_60C9CFB8, *v3);
        if ( v5 != 1 && !result )
        {
          v6 = *v3;
          v7 = a1 + 10;
          if ( (unsigned int)*v3 >= 4 )
            v6 = 0;
          a1[v6 + 916] = 1;
          v8 = sub_6047457C((int)(a1 + 10), 0);
          v9 = *(unsigned __int8 *)(sub_6047482C((int)(a1 + 10), 0) + 50);
          sub_604E2228(a1);
          result = sub_6047572C((int)(a1 + 10), &dword_60CA53F4, *v3, 0xEu, 0);
          if ( v9 == 1 )
          {
            result = a1[1428];
            if ( result <= 0x22 )
            {
              v10 = (_DWORD *)((char *)&unk_60CA5424 + 8 * result);
              (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
              (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
              v11 = v10[1];
              (*(void (__fastcall **)(int *))(dword_60CA541C + 12))(&dword_60CA541C);
              if ( v11 == dword_60CA5420 )
              {
                return sub_6047459C((int)v7, 0);
              }
              else
              {
                v12 = v10[1];
                for ( i = 1; *(unsigned __int8 *)(v12 + i - 1) == *(unsigned __int8 *)(dword_60CA5420 + i - 1); i += 2 )
                {
                  if ( !*(_BYTE *)(v12 + i - 1) )
                    return sub_6047459C((int)v7, 0);
                  if ( i > 0x80000 || *(unsigned __int8 *)(v12 + i) != *(unsigned __int8 *)(dword_60CA5420 + i) )
                    break;
                  if ( !*(_BYTE *)(v12 + i) )
                    return sub_6047459C((int)v7, 0);
                }
                sub_60473DE4(v7, 0, v10, 1);
                return sub_6047455C((int)v7, 0, v8);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
