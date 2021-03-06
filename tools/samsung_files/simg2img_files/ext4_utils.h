/*
 * Copyright (C) 2010 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _EXT4_UTILS_H_
#define _EXT4_UTILS_H_

<<<<<<< HEAD
=======
#ifdef __cplusplus
extern "C" {
#endif

#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#define _FILE_OFFSET_BITS 64
#define _LARGEFILE64_SOURCE
#include <sys/types.h>
#include <unistd.h>

>>>>>>> 59ec8fba48b6b30cd3cc53259a992757dd1e4974
#include <sys/types.h>
#include <errno.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
<<<<<<< HEAD
=======
#include <setjmp.h>

#if defined(__APPLE__) && defined(__MACH__)
#define lseek64 lseek
#define ftruncate64 ftruncate
#define mmap64 mmap
#define off64_t off_t
#endif

#ifdef __BIONIC__
extern void*  __mmap2(void *, size_t, int, int, int, off_t);
static inline void *mmap64(void *addr, size_t length, int prot, int flags,
        int fd, off64_t offset)
{
    return __mmap2(addr, length, prot, flags, fd, offset >> 12);
}
#endif
>>>>>>> 59ec8fba48b6b30cd3cc53259a992757dd1e4974

extern int force;

#define warn(fmt, args...) do { fprintf(stderr, "warning: %s: " fmt "\n", __func__, ## args); } while (0)
<<<<<<< HEAD
#define error(fmt, args...) do { fprintf(stderr, "error: %s: " fmt "\n", __func__, ## args); if (!force) exit(EXIT_FAILURE); } while (0)
#define error_errno(s) error(s ": %s", strerror(errno))
#define critical_error(fmt, args...) do { fprintf(stderr, "critical error: %s: " fmt "\n", __func__, ## args); exit(EXIT_FAILURE); } while (0)
#define critical_error_errno(s) critical_error(s ": %s", strerror(errno))
=======
#define error(fmt, args...) do { fprintf(stderr, "error: %s: " fmt "\n", __func__, ## args); if (!force) longjmp(setjmp_env, EXIT_FAILURE); } while (0)
#define error_errno(s, args...) error(s ": %s", ##args, strerror(errno))
#define critical_error(fmt, args...) do { fprintf(stderr, "critical error: %s: " fmt "\n", __func__, ## args); longjmp(setjmp_env, EXIT_FAILURE); } while (0)
#define critical_error_errno(s, args...) critical_error(s ": %s", ##args, strerror(errno))
>>>>>>> 59ec8fba48b6b30cd3cc53259a992757dd1e4974

#define EXT4_SUPER_MAGIC 0xEF53
#define EXT4_JNL_BACKUP_BLOCKS 1

<<<<<<< HEAD
#define min(a, b) ((a) < (b) ? (a) : (b))
=======
#ifndef min /* already defined by windows.h */
#define min(a, b) ((a) < (b) ? (a) : (b))
#endif
>>>>>>> 59ec8fba48b6b30cd3cc53259a992757dd1e4974

#define DIV_ROUND_UP(x, y) (((x) + (y) - 1)/(y))
#define ALIGN(x, y) ((y) * DIV_ROUND_UP((x), (y)))

#define __le64 u64
#define __le32 u32
#define __le16 u16

#define __be64 u64
#define __be32 u32
#define __be16 u16

#define __u64 u64
#define __u32 u32
#define __u16 u16
#define __u8 u8

typedef unsigned long long u64;
<<<<<<< HEAD
=======
typedef signed long long s64;
>>>>>>> 59ec8fba48b6b30cd3cc53259a992757dd1e4974
typedef unsigned int u32;
typedef unsigned short int u16;
typedef unsigned char u8;

struct block_group_info;

struct ext2_group_desc {
	__le32 bg_block_bitmap;
	__le32 bg_inode_bitmap;
	__le32 bg_inode_table;
	__le16 bg_free_blocks_count;
	__le16 bg_free_inodes_count;
	__le16 bg_used_dirs_count;
	__le16 bg_pad;
	__le32 bg_reserved[3];
};

struct fs_info {
<<<<<<< HEAD
	u64 len;
=======
	s64 len;	/* If set to 0, ask the block device for the size,
			 * if less than 0, reserve that much space at the
			 * end of the partition, else use the size given. */
>>>>>>> 59ec8fba48b6b30cd3cc53259a992757dd1e4974
	u32 block_size;
	u32 blocks_per_group;
	u32 inodes_per_group;
	u32 inode_size;
	u32 inodes;
	u32 journal_blocks;
	u16 feat_ro_compat;
	u16 feat_compat;
	u16 feat_incompat;
<<<<<<< HEAD
=======
	u32 bg_desc_reserve_blocks;
>>>>>>> 59ec8fba48b6b30cd3cc53259a992757dd1e4974
	const char *label;
	u8 no_journal;
};

struct fs_aux_info {
	struct ext4_super_block *sb;
<<<<<<< HEAD
=======
	struct ext4_super_block **backup_sb;
>>>>>>> 59ec8fba48b6b30cd3cc53259a992757dd1e4974
	struct ext2_group_desc *bg_desc;
	struct block_group_info *bgs;
	u32 first_data_block;
	u64 len_blocks;
	u32 inode_table_blocks;
	u32 groups;
	u32 bg_desc_blocks;
<<<<<<< HEAD
	u32 bg_desc_reserve_blocks;
=======
>>>>>>> 59ec8fba48b6b30cd3cc53259a992757dd1e4974
	u32 default_i_flags;
	u32 blocks_per_ind;
	u32 blocks_per_dind;
	u32 blocks_per_tind;
};

extern struct fs_info info;
extern struct fs_aux_info aux_info;

<<<<<<< HEAD
=======
extern jmp_buf setjmp_env;

>>>>>>> 59ec8fba48b6b30cd3cc53259a992757dd1e4974
static inline int log_2(int j)
{
	int i;

	for (i = 0; j > 0; i++)
		j >>= 1;

	return i - 1;
}

int ext4_bg_has_super_block(int bg);
<<<<<<< HEAD
void write_ext4_image(const char *filename, int gz, int sparse);
=======
void write_ext4_image(int fd, int gz, int sparse, int crc,
		int wipe);
>>>>>>> 59ec8fba48b6b30cd3cc53259a992757dd1e4974
void ext4_create_fs_aux_info(void);
void ext4_free_fs_aux_info(void);
void ext4_fill_in_sb(void);
void ext4_create_resize_inode(void);
void ext4_create_journal_inode(void);
void ext4_update_free(void);
<<<<<<< HEAD
u64 get_file_size(const char *filename);
u64 parse_num(const char *arg);
=======
void ext4_queue_sb(void);
u64 get_file_size(int fd);
u64 parse_num(const char *arg);
void ext4_parse_sb(struct ext4_super_block *sb);

#ifdef __cplusplus
}
#endif
>>>>>>> 59ec8fba48b6b30cd3cc53259a992757dd1e4974

#endif
