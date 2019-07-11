# Cheat

A C++ implementation of cheat sheets.

![Because XKCD](https://imgs.xkcd.com/comics/tar.png)


### Usage:

##### View a cheat sheet

```bash
$ cheat tar

# To extract an uncompressed archive:
tar -xvf /path/to/foo.tar

# To create an uncompressed archive:
tar -cvf /path/to/foo.tar /path/to/foo/

# To extract a .gz archive:
tar -xzvf /path/to/foo.tgz

# To create a .gz archive:
tar -czvf /path/to/foo.tgz /path/to/foo/

# To list the content of an .gz archive:
tar -ztvf /path/to/foo.tgz
```

`cheat` searches for any possible cheatsheets in the `DEFAULT_CHEAT_SHEET_PATH'
that matches the first argument and prints its contents.

##### Edit a cheat sheet

```bash
$ cheat -e tar
```

Using the `-e` flag, `cheat` will bring up the editor that is specified using
the `$EDITOR` environment variable, using `vim` as the backup. 


### Installation:

Build and install using `GNU make`

```bash
cd src/
make
sudo make install
```

