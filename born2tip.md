파티션 확인 lsblk

shasum born2beroot.vdi

hostname바꾸기
hostnamectl set-hostname <바꾸고싶은이름>

유저 추가

groupadd 그룹이름
usermod -aG 그룹 유저
adduser
deluser
lslogins

terminal 원격접속
ssh juhyulee@192.168.56.1 -p 4242


ssh 작동상태 확인
systemctl status ssh
- ```~/.ssh/authorized_keys``` 폴더에 공개키 넣기
ufw status verbose //  ufw 현재 상태 확인

apparmor 확인
aa-status

## Group and User

유저 목록
```cat /etc/passwd```
```grep /bin/bash /etc/passwd```

로그인한 사용자 확인
```lslogins```

그룹목록
```cat /etc/group```

### 그룹

생성 ```groupadd user42```
삭제 ```groupdel user42```
이름변경 ```groupmod -n user-mod user42``` user42 -> user-mod
유저 추가
1. ```usermod```
	- 옵션
	- G : 유저를 그룹에 속하게 만듬
	- a : 기존에는 1개의 그룹에 밖에 속하지 못함, 추가로 2차 그룹을 지정할 때 사용
	- ```usermod -aG sudo,user42 donyoki```
2. ```gpasswd```
	- 추가 ```gpasswd -a dongyoki user42```
	- 삭제 ```gpasswd -d dongyoki user42```
유저가 속한 그룹 확인
1. ```groups juhyulee```
2. ```id juhyulee```

### 유저

login 중인 유저 변경 ```su username```
이전 사용자로 돌아가기 ```exit```

생성 ```useradd friend```
- 옵션
- m : 홈 디렉토리도 함께 생성
- g : 그룹 지정
- d : 디렉토리 지정
- s : 쉘 지정
- p : 암호 지정
비밀번호 생성 ```passwd friend```

생성 ```adduser friend```
- 비밀번호설정, 홈 디렉토리 생성등의 과정을 알아서 해줌

삭제 ```userdel friend```
- 옵션
- r : 홈 디렉토리 삭제

삭제 ```deluser friend```
- 옵션
- \-\-remove : 홈 디렉토리 삭제
- \-\-remove-all-files : 홈 디렉토리를 포함한 계정명으로 된 모든 것 삭제

수정 ```usermod friend```